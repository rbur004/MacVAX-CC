# define number 257# define stop 258# define DEFINED 259# define EQ 260# define NE 261# define LE 262# define GE 263# define LS 264# define RS 265# define ANDAND 266# define OROR 267# define UMINUS 268#define yy1clearin yy1char = -1#define yy1errok yy1errflag = 0extern int yy1char;extern short yy1errflag;#ifndef YY1MAXDEPTH#define YY1MAXDEPTH 150#endif#ifndef YY1STYPE#define YY1STYPE int#endifYY1STYPE yy1lval, yy1val;# define YY1ERRCODE 256#include <string.h>#include "cpp_cpp.h"#include "cpp_cpy.h"# include "cpp_yy1lex.c"extern short  yy1exca[];# define YY1NPROD 30# define YY1LAST 363extern short  yy1act[];short  yy1exca [] ={-1, 1,	0, -1,	-2, 0,-1, 44,	262, 0,	263, 0,	60, 0,	62, 0,	-2, 9,-1, 45,	262, 0,	263, 0,	60, 0,	62, 0,	-2, 10,-1, 46,	262, 0,	263, 0,	60, 0,	62, 0,	-2, 11,-1, 47,	262, 0,	263, 0,	60, 0,	62, 0,	-2, 12,-1, 48,	260, 0,	261, 0,	-2, 13,-1, 49,	260, 0,	261, 0,	-2, 14,	};extern short  yy1pact[];short  yy1act []={  13,  24,  35,  58,  13,  11,  14,  30,  15,  11,  12,  60,  13,  24,  12,   1,  57,  11,  14,  30,  15,  59,  12,  18,  13,  19,  29,   0,   0,  11,  14,   0,  15,   0,  12,  18,   3,  19,  29,  13,  24,  31,  32,  33,  11,  14,  30,  15,   0,  12,  13,  24,   0,   0,   0,  11,  14,  25,  15,   5,  12,   0,  18,   0,  19,  29,   7,   0,   0,  25,   0,   4,   0,  18,   0,  19,  29,   0,  13,  24,   0,   0,   0,  11,  14,   0,  15,  26,  12,   0,   0,   0,  13,  24,   0,   0,  25,  11,  14,  26,  15,  18,  12,  19,  13,  24,   0,  25,   0,  11,  14,   0,  15,  13,  12,  18,   0,  19,  11,  14,   0,  15,   0,  12,   0,   0,  26,  18,   0,  19,   0,   0,   0,   0,  13,  25,  18,  26,  19,  11,  14,   0,  15,   0,  12,  13,   0,   0,   0,  25,  11,  14,   6,  15,   0,  12,   0,  18,   0,  19,   0,   0,   0,   0,   0,  26,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,  26,  34,   0,   0,   0,  37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  36,   0,   0,   0,  22,  23,  20,  21,  16,  17,  27,  28,   0,  61,   0,   0,  22,  23,  20,  21,  16,  17,  27,  28,   0,   0,   0,   0,   0,   0,   0,   0,  16,  17,   0,   0,   0,   0,   0,   0,   0,  10,   0,  22,  23,  20,  21,  16,  17,  27,  28,   0,   0,   0,  22,  23,  20,  21,  16,  17,  27,  28,   0,   0,   9,   0,   8,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  22,  23,  20,  21,  16,  17,  27,   0,   0,   0,   0,   0,   0,   0,  22,  23,  20,  21,  16,  17,   0,   0,   0,   0,   0,   0,  22,  23,  20,  21,  16,  17,   0,   0,   0,  22,  23,  20,  21,  16,  17,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  20,  21,  16,  17 };extern short  yy1pgo[];short  yy1pact []={  26,-1000,   2,-1000,  26,  26,  26,  26, -38,-1000,-1000,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,  26,-1000,-1000,-1000, -25,-254,-1000,-1000,-1000,-1000, -33, -33, 108, 108, -13, -13, -13, -13,  97,  97,  76,  67,  67,  55,  41, -37,  13,-1000, -30,  26,-1000,  13 };extern short  yy1r1[];short  yy1pgo []={   0,  15, 172,  36 };extern short  yy1r2[];short  yy1r1 []={   0,   1,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   3,   3,   3,   3,   3,   3,   3 };extern short  yy1chk[];short  yy1r2 []={   0,   2,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   5,   3,   1,   2,   2,   2,   3,   4,   2,   1 };extern short  yy1def[];short  yy1chk []={-1000,  -1,  -2,  -3,  45,  33, 126,  40, 259, 257, 258,  42,  47,  37,  43,  45, 264, 265,  60,  62, 262, 263, 260, 261,  38,  94, 124, 266, 267,  63,  44,  -3,  -3,  -3,  -2,  40, 257,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  -2,  41, 257,  58,  41,  -2 };#ifndef lintstatic char yaccpar_sccsid[] = "@(#)yaccpar	4.1	(Berkeley)	2/11/83";#endif## define YY1FLAG -1000# define YY1ERROR goto yy1errlab# define YY1ACCEPT return(0)# define YY1ABORT return(1)/*	parser for yacc output	*/#ifdef YY1DEBUGint yy1debug = 0; /* 1 for debugging */#endifYY1STYPE yy1v[YY1MAXDEPTH]; /* where the values are stored */int yy1char = -1; /* current input token number */int yy1nerrs = 0;  /* number of errors */short yy1errflag = 0;  /* error recovery flag */#if macVaxvoid inityy1globals( void ){	memset(&yy1lval, 0, sizeof(YY1STYPE));	memset(&yy1val, 0, sizeof(YY1STYPE));	#ifdef YY1DEBUG	yy1debug = 0; /* 1 for debugging */#endif	memset(yy1v, 0, sizeof(YY1STYPE)*YY1MAXDEPTH);	yy1char = -1;	yy1nerrs = 0;	yy1errflag = 0;}#endifint yy1parse( void )	{	short yy1s[YY1MAXDEPTH];	short yy1j, yy1m;	register YY1STYPE *yy1pvt;	register short yy1state, *yy1ps, yy1n;	register YY1STYPE *yy1pv;	register short *yy1xi;	yy1state = 0;	yy1char = -1;	yy1nerrs = 0;	yy1errflag = 0;	yy1ps= &yy1s[-1];	yy1pv= &yy1v[-1]; yy1stack:    /* put a state and value onto the stack */#ifdef YY1DEBUG	if( yy1debug  ) printf( "state %d, char 0%o\n", yy1state, yy1char );#endif		if( ++yy1ps> &yy1s[YY1MAXDEPTH] ) { yy1error( "yacc stack overflow" ); return(1); }		*yy1ps = yy1state;		++yy1pv;		*yy1pv = yy1val; yy1newstate:	yy1n = yy1pact[yy1state];	if( yy1n<= YY1FLAG ) goto yy1default; /* simple state */	if( yy1char<0 ) if( (yy1char=yy1lex())<0 ) yy1char=0;	if( (yy1n += yy1char)<0 || yy1n >= YY1LAST ) goto yy1default;	if( yy1chk[ yy1n=yy1act[ yy1n ] ] == yy1char ){ /* valid shift */		yy1char = -1;		yy1val = yy1lval;		yy1state = yy1n;		if( yy1errflag > 0 ) --yy1errflag;		goto yy1stack;		} yy1default:	/* default state action */	if( (yy1n=yy1def[yy1state]) == -2 ) {		if( yy1char<0 ) if( (yy1char=yy1lex())<0 ) yy1char = 0;		/* look through exception table */		for( yy1xi=yy1exca; (*yy1xi!= (-1)) || (yy1xi[1]!=yy1state) ; yy1xi += 2 ) ; /* VOID */		while( *(yy1xi+=2) >= 0 ){			if( *yy1xi == yy1char ) break;			}		if( (yy1n = yy1xi[1]) < 0 ) return(0);   /* accept */		}	if( yy1n == 0 ){ /* error */		/* error ... attempt to resume parsing */		switch( yy1errflag ){		case 0:   /* brand new error */			yy1error( "Syntax error" );		yy1errlab:			++yy1nerrs;		case 1:		case 2: /* incompletely recovered error ... try again */			yy1errflag = 3;			/* find a state where "error" is a legal shift action */			while ( yy1ps >= yy1s ) {			   yy1n = yy1pact[*yy1ps] + YY1ERRCODE;			   if( yy1n>= 0 && yy1n < YY1LAST && yy1chk[yy1act[yy1n]] == YY1ERRCODE ){			      yy1state = yy1act[yy1n];  /* simulate a shift of "error" */			      goto yy1stack;			      }			   yy1n = yy1pact[*yy1ps];			   /* the current yy1ps has no shift onn "error", pop stack */#ifdef YY1DEBUG			   if( yy1debug ) printf( "Error recovery pops state %d, uncovers %d\n", *yy1ps, yy1ps[-1] );#endif			   --yy1ps;			   --yy1pv;			   }			/* there is no state on the stack with an error shift ... abort */	yy1abort:			return(1);		case 3:  /* no shift yet; clobber input char */#ifdef YY1DEBUG			if( yy1debug ) printf( "Error recovery discards char %d\n", yy1char );#endif			if( yy1char == 0 ) goto yy1abort; /* don't discard EOF, quit */			yy1char = -1;			goto yy1newstate;   /* try again in the same state */			}		}	/* reduction by production yy1n */#ifdef YY1DEBUG		if( yy1debug ) printf("reduce %d\n",yy1n);#endif		yy1ps -= yy1r2[yy1n];		yy1pvt = yy1pv;		yy1pv -= yy1r2[yy1n];		yy1val = yy1pv[1];		yy1m=yy1n;			/* consult goto table to find next state */		yy1n = yy1r1[yy1n];		yy1j = yy1pgo[yy1n] + *yy1ps + 1;		if( yy1j>=YY1LAST || yy1chk[ yy1state = yy1act[yy1j] ] != -yy1n ) yy1state = yy1act[yy1pgo[yy1n]];		switch(yy1m){			case 1:{return(yy1pvt[-1]);} break;case 2:{yy1val = yy1pvt[-2] * yy1pvt[-0];} break;case 3:{yy1val = yy1pvt[-2] / yy1pvt[-0];} break;case 4:{yy1val = yy1pvt[-2] % yy1pvt[-0];} break;case 5:{yy1val = yy1pvt[-2] + yy1pvt[-0];} break;case 6:{yy1val = yy1pvt[-2] - yy1pvt[-0];} break;case 7:{yy1val = yy1pvt[-2] << yy1pvt[-0];} break;case 8:{yy1val = yy1pvt[-2] >> yy1pvt[-0];} break;case 9:{yy1val = yy1pvt[-2] < yy1pvt[-0];} break;case 10:{yy1val = yy1pvt[-2] > yy1pvt[-0];} break;case 11:{yy1val = yy1pvt[-2] <= yy1pvt[-0];} break;case 12:{yy1val = yy1pvt[-2] >= yy1pvt[-0];} break;case 13:{yy1val = yy1pvt[-2] == yy1pvt[-0];} break;case 14:{yy1val = yy1pvt[-2] != yy1pvt[-0];} break;case 15:{yy1val = yy1pvt[-2] & yy1pvt[-0];} break;case 16:{yy1val = yy1pvt[-2] ^ yy1pvt[-0];} break;case 17:{yy1val = yy1pvt[-2] | yy1pvt[-0];} break;case 18:{yy1val = yy1pvt[-2] && yy1pvt[-0];} break;case 19:{yy1val = yy1pvt[-2] || yy1pvt[-0];} break;case 20:{yy1val = yy1pvt[-4] ? yy1pvt[-2] : yy1pvt[-0];} break;case 21:{yy1val = yy1pvt[-0];} break;case 22:{yy1val = yy1pvt[-0];} break;case 23:{yy1val = -yy1pvt[-0];} break;case 24:{yy1val = !yy1pvt[-0];} break;case 25:{yy1val = ~yy1pvt[-0];} break;case 26:{yy1val = yy1pvt[-1];} break;case 27:{yy1val= yy1pvt[-1];} break;case 28:{yy1val = yy1pvt[-0];} break;case 29:{yy1val= yy1pvt[-0];} break; 		}		goto yy1stack;  /* stack new state and value */	}