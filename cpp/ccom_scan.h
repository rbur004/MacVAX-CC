#ifndef _CCOM_SCAN_#define _CCOM_SCAN_# include "ccom_mfile1.h"int mainp1( int argc, char *argv[] );void lxenter( char *s, short m );void lxmore( register int c, register int m );void lxinit( void );void lxstr( int ct );void lxcom( void );int yylex( void );int lxres( void );int procasm( void );void outasm( char *cptr );void lxtitle( void );#ifdef FLEXNAMESchar *savestr( register char *cp );char *hash( char *s );#endifvoid scan_init_globals( void );#endif _CCOM_SCAN_