#include <stdlib.h>#include "cpp_memoryutils.h"struct cpp_TAllocationNode	{	void						*fBlock;	struct cpp_TAllocationNode	*fNextNode;	};						struct cpp_TAllocationNode *cpp_gAllocationList;int cpp_StartAllocationTracker( void )	{	cpp_gAllocationList = nil;	return TRUE;	}						int cpp_RememberAllocation( void *theBlock )	{	struct cpp_TAllocationNode *theNewNode;			theNewNode = malloc( sizeof( struct cpp_TAllocationNode ) );	if ( theNewNode == nil )		return FALSE;		theNewNode->fBlock = theBlock;		if (cpp_gAllocationList == nil)		{		cpp_gAllocationList = theNewNode;		theNewNode->fNextNode = nil;		}	else		{		theNewNode->fNextNode = cpp_gAllocationList;		cpp_gAllocationList = theNewNode;		}			return TRUE;	}	int cpp_FreeRememberedAllocations( void )	{	struct cpp_TAllocationNode *theNode, *theNextNode;		if ( cpp_gAllocationList != nil )		{				// Walk down the list and dispose all of the blocks...		theNode = cpp_gAllocationList;				do			{			theNextNode = theNode->fNextNode;			free( theNode->fBlock );			free( theNode );			theNode = theNextNode;			} while ( theNextNode != nil );				cpp_gAllocationList = nil;				}			return TRUE;	}								