#ifndef _CCOM_READER_#define _CCOM_READER_int p2init( int argc, char *argv[] );int mainp2( int argc, char *argv[] );#ifdef ONEPASSvoid p2compile( NODE *p );void p2bbeg( int aoff, int myreg );void p2bend( void );#endifvoid delay( NODE *p );int delay1( NODE *p );void delay2( register NODE *p );void codgen( NODE *p, int cookie );#ifndef BUG4void prcook( int cookie );#endifvoid order( NODE *p, int cook );void store( NODE *p );void constore( NODE *p );void markcall( NODE *p );void stoarg( NODE *p, int calltype );void cbranch( NODE *p, int true, int false );void rcount( void );#ifndef BUG4void eprint( NODE *p, int down, int *a, int *b );#endif#ifndef NOMAINNODE *eread( void );CONSZ rdin( int base );#endif#ifndef FIELDOPSvoid ffld( NODE *p, int down, int *down1, int *down2 );#endifvoid oreg2( NODE *p );void canon( NODE *p );#if macVaxvoid reader_init_statics( void );#endif#endif /* _CCOM_READER_ */