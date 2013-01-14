#ifndef _CCOM_MFILE1_#define _CCOM_MFILE1_/* Static	char	*sccsid = "@(#)mfile1	1.5	(ULTRIX)	3/14/86";*//************************************************************************** * *		Modification History * * 005  Lu Anne Van de Pas, 14-Mar-86 *	Added in.typattr and dpn to dnu structure for building lint with  *	two pass version of compile. * * 004  Lu Anne Van de Pas, 02-Mar-86 *	Added fcon for single precision constants. (ex. 98.987f)  * *	Victoria Holt, 26-Feb-86 * 003	Added support for const and volatile; new field stypattr in *	symtab, new type boolean, new type RODATA. * *	Rich Phillips 09-13-84 * 002  Back out of 001, see local.c Mod History for reason. * *	Rich Phillips 07-20-84 * 001	Define SWASREG and NWASREG for detection of illegally taking *	the address of something defined with REGISTER, but was changed *	to something other than register by the compiler. * **************************************************************************/# include "ccom_macdefs.h"# include "ccom_manifest.h"/*	storage classes  */# define SNULL 0# define AUTO 1# define EXTERN 2# define STATIC 3# define REGISTER 4# define EXTDEF 5# define LABEL 6# define ULABEL 7# define MOS 8# define PARAM 9# define STNAME 10# define MOU 11# define UNAME 12# define TYPEDEF 13# define FORTRAN 14# define ENAME 15# define MOE 16# define UFORTRAN 17# define USTATIC 18	/* field size is ORed in */# define FIELD 0100# define FLDSIZ 077# ifndef BUG1extern char *scnames();# endif/*	location counters */# define PROG 0# define DATA 1# define ADATA 2# define STRNG 3# define ISTRNG 4# define STAB 5# define RODATA 6/* symbol table flags */# define SMOS 01# define SHIDDEN 02# define SHIDES 04# define SSET 010# define SREF 020# define SNONUNIQ 040# define STAG 0100# ifndef FIXDEF# define FIXDEF(p)#endif# ifndef FIXARG# define FIXARG(p)# endif# ifndef FIXSTRUCT# define FIXSTRUCT(a,b)# endif	/* alignment of initialized quantities */# ifndef AL_INIT#	define	AL_INIT ALINT# endifstruct symtab {#ifndef FLEXNAMES	char sname[NCHNAM];#else	char *sname;#endif	TWORD stype;  /* type word */	TWORD stypattr;	char sclass;  /* storage class */	char slevel;  /* scope level */	/* RAP001 		Make sflags unsigned so it will print out correctly when		using -Xd and SWASREG is set.	*/	unsigned char sflags;  /* flags for set, use, hidden, mos, etc. */	int offset;  /* offset or value */	short dimoff; /* offset into the dimension table */	short sizoff; /* offset into the size table */	short suse;  /* line number of last use of the variable */	};# ifdef ONEPASS/* NOPREF must be defined for use in first pass tree machine */# define NOPREF 020000  /* no preference for register assignment */#elseunion ndu {	struct {		int op;		TWORD type;		int cdim, csiz;		}fn; /* front node */	struct {		int op;		TWORD type;		int cdim, csiz;		NODE *left;		NODE * right;		int typattr; 		}in; /* interior node */		struct {		/* this structure is the same as above,		   but is used when a value, rather than		   address, is kept in +left */		int op;		TWORD type;		int cdim, csiz;		CONSZ lval;		int rval;		}tn; /* terminal node */		struct {		/* this structure is used when a floating point constant		   is being computed */		int op;		TWORD type;		int cdim, csiz;		double fval;		}fpn; /* floating point node */		struct {		int op;		int cdim;		TWORD type;		int csiz;		double dval;		} dpn;	};# endifstruct sw {	CONSZ sval;	int slab;	};extern struct sw swtab[];extern struct sw *swp;extern int swx;extern int ftnno;extern int blevel;extern int instruct, stwart;extern int lineno, nerrors;typedef union {	int intval;	NODE * nodep;	} YYSTYPE;extern YYSTYPE yylval;typedef enum {_false, _true} boolean;extern CONSZ lastcon;extern double dcon;extern float fcon; 	/* vdp004  add single precision constant*/extern char ftitle[];extern char ititle[];extern struct symtab *stab;extern int curftn;extern int curclass;extern int curdim;extern int dimtab[];extern int paramstk[];extern int paramno;extern int autooff, argoff, strucoff;extern int regvar;extern int minrvar;extern int brkflag;extern char yytext[];extern int strflg;extern OFFSZ inoff;extern int reached;/*	tunnel to buildtree for name id's */extern int idname;extern NODE node[];extern NODE *lastfree;extern int cflag, hflag, pflag;/* various labels */extern int brklab;extern int contlab;extern int flostat;extern int retlab;extern int retstat;extern int asavbc[], *psavbc;/*	flags used in structures/unions */# define SEENAME 01# define INSTRUCT 02# define INUNION 04# define FUNNYNAME 010# define TAGNAME 020/*	flags used in the (elementary) flow analysis ... */# define FBRK 02# define FCONT 04# define FDEF 010# define FLOOP 020/*	flags used for return status */# define RETVAL 1# define NRETVAL 2/*	used to mark a constant with no name field */# define NONAME 040000	/* mark an offset which is undefined */# define NOOFFSET (-10201)/*	declarations of various functions */extern NODE	*buildtree(),	*bdty(),	*mkty(),	*rstruct(),	*dclstruct(),	*getstr(),	*tymerge(),	*stref(),	*offcon(),	*bcon(),	*bpsize(),	*convert(),	*pconvert(),	*oconvert(),	*ptmatch(),	*tymatch(),	*makety(),	*block(),	*doszof(),	*talloc(),	*optim(),	*strargs(),	*clocal();# define checkst(x)# ifndef CHARCAST/* to make character constants into character connstants *//* this is a macro to defend against cross-compilers, etc. */# define CHARCAST(x) (char)(x)# endif# define BCSZ 100 /* size of the table to save break and continue labels */# define SYMTSZ 1000 /* size of the symbol table (was 500) */# define DIMTABSZ 800 /* size of the dimension/size table (was 800) */# define PARAMSZ 100 /* size of the parameter stack */# define SWITSZ 200 /* size of switch table *//*	special interfaces for yacc alone *//*	These serve as abbreviations of 2 or more ops:	ASOP	=, = ops	RELOP	LE,LT,GE,GT	EQUOP	EQ,NE	DIVOP	DIV,MOD	SHIFTOP	LS,RS	ICOP	ICR,DECR	UNOP	NOT,COMPL	STROP	DOT,STREF	*/# define ASOP 25# define RELOP 26# define EQUOP 27# define DIVOP 28# define SHIFTOP 29# define INCOP 30# define UNOP 31# define STROP 32# define LP 50# define RP 51# define LC 52# define RC 53#endif /* _CCOM_MFILE1_ */