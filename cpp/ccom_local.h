#ifndef _CCOM_LOCAL_#define _CCOM_LOCAL_NODE *cast( register NODE *p, TWORD t );NODE *clocal( NODE *p );int andable( NODE *p );void cendarg( void );int cisreg( TWORD t );NODE *offcon( OFFSZ off, TWORD t, int d, int s );void incode( NODE *p, int sz );void fincode( double d, int sz );void cinit( NODE *p, int sz );void vfdzero( int n );char *exname( char *p );int ctype( int type );int noinit( int t );void commdec( int id );int isitlong( int cb, int ce );int cvtfloat( char *s );int cvtdouble( char *s );void ecode( NODE *p );#ifndef ONEPASSint tlen( NODE *p );#endif#if macVaxvoid local_init_statics( void );#endif#endif /* _CCOM_LOCAL_ */