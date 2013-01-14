#ifndef lintstatic	char	*sccsid = "@(#)xdefs.c	1.2	(ULTRIX)	3/12/86";#endif/************************************************************************ *									* *			Copyright (c) 1984 by				* *		Digital Equipment Corporation, Maynard, MA		* *			All rights reserved.				* *									* *   This software is furnished under a license and may be used and	* *   copied  only  in accordance with the terms of such license and	* *   with the  inclusion  of  the  above  copyright  notice.   This	* *   software  or  any  other copies thereof may not be provided or	* *   otherwise made available to any other person.  No title to and	* *   ownership of the software is hereby transferred.			* *									* *   This software is  derived  from  software  received  from  the	* *   University    of   California,   Berkeley,   and   from   Bell	* *   Laboratories.  Use, duplication, or disclosure is  subject  to	* *   restrictions  under  license  agreements  with  University  of	* *   California and with AT&T.						* *									* *   The information in this software is subject to change  without	* *   notice  and should not be construed as a commitment by Digital	* *   Equipment Corporation.						* *									* *   Digital assumes no responsibility for the use  or  reliability	* *   of its software on equipment which is not supplied by Digital.	* *									* ************************************************************************//********************************************************************		Modifications* 001 - Lu Anne Van de Pas, 02-Mar-86*	Added fcon to keep the last f floating constant read*********************************************************************/#include <string.h>#include "ccom_mfile1.h"#include "ccom_xdefs.h"/*	communication between lexical routines	*/char	ftitle[100];   	/* title of the file */char	ititle[100];   	/* title of initial file */int	lineno;		/* line number of the input file */int xdebug;CONSZ lastcon;  /* the last constant read by the lexical analyzer */double dcon;   /* the last double read by the lexical analyzer */float fcon;   /* vdp001 that last float read by the lexical analyzer *//*	symbol table maintainence *//*struct symtab stab[SYMTSZ+1];   */struct symtab *stab;  /* one extra slot for scratch */int	curftn;  /* "current" function */int	ftnno;  /* "current" function number */int	curclass,	  /* current storage class */	instruct,	/* "in structure" flag */	stwart,		/* for accessing names which are structure members or names */	blevel,		/* block level: 0 for extern, 1 for ftn args, >=2 inside function */	curdim;		/* current offset into the dimension table */	int	dimtab[ DIMTABSZ ];int	paramstk[ PARAMSZ ];  /* used in the definition of function parameters */int	paramno;	  /* the number of parameters */int	autooff,	/* the next unused automatic offset */	argoff,	/* the next unused argument offset */	strucoff;	/*  the next structure offset position */int	regvar;		/* the next free register for register variables */int	minrvar;	/* the smallest that regvar gets witing a function */OFFSZ	inoff;		/* offset of external element being initialized */int	brkflag;	/* complain about break statements not reached */struct sw swtab[SWITSZ];  /* table for cases within a switch */struct sw *swp;  /* pointer to next free entry in swtab */int swx;  /* index of beginning of cases for current switch */int strflg;  /* if on, strings are to be treated as lists */int reached;	/* true if statement can be reached... */int idname;	/* tunnel to buildtree for name id's */NODE node[TREESZ];int cflag;  /* do we check for funny casts */int hflag;  /* do we check for various heuristics which may indicate errors */int pflag;  /* do we check for portable constructions */int brklab;int contlab;int flostat;int retlab;int retstat;/* save array for break, continue labels, and flostat */int asavbc[BCSZ];int *psavbc ;# ifndef BUG1static char *ccnames[] = { /* names of storage classes */	"SNULL",	"AUTO",	"EXTERN",	"STATIC",	"REGISTER",	"EXTDEF",	"LABEL",	"ULABEL",	"MOS",	"PARAM",	"STNAME",	"MOU",	"UNAME",	"TYPEDEF",	"FORTRAN",	"ENAME",	"MOE",	"UFORTRAN",	"USTATIC",	};#define kscnames_bufSize 12static char scnames_buf[12];char *scnames( register int c )	{	/* return the name for storage class c */	if( c&FIELD ){		sprintf( scnames_buf, "FIELD[%d]", c&FLDSIZ );		return( scnames_buf );		}	return( ccnames[c] );	}# endif#if macVaxvoid xdefs_init_statics( void ){#	ifndef BUG1	memset(scnames_buf, 0, kscnames_bufSize * sizeof( char ));#	endif /* BUG1 */}#endif /* macVax */