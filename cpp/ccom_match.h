#ifndef _CCOM_MATCH_#define _CCOM_MATCH_int tshape( NODE *p, int shape );int ttype( TWORD t, int tword );void setrew( void );int match( NODE *p, int cookie );void expand( NODE *p, int cookie, register char *cp );NODE *getlr( NODE *p, int c );#ifdef MULTILEVELvoid mlinit( void );int mlmatch( NODE *subtree, int target, int subtarget );#endif#endif /* _CCOM_MATCH_ */