/*
* Copyright 2018-2019 Redis Labs Ltd. and Contributors
*
* This file is available under the Apache License, Version 2.0,
* modified with the Commons Clause restriction.
*/

#ifndef _CLAUSE_MERGE_H
#define _CLAUSE_MERGE_H

#include "../../util/vector.h"
#include "../../util/triemap/triemap.h"

typedef struct {
	Vector *graphEntities; /* Vector of AST_NodeEntity pointers. */
} AST_MergeNode;

AST_MergeNode* New_AST_MergeNode(Vector *graphEntities);
void MergeClause_ReferredEntities(const AST_MergeNode *merge_node, TrieMap *referred_entities);
void Free_AST_MergeNode(AST_MergeNode *mergeNode);

#endif