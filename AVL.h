#ifndef _AVL_H_
#define _AVL_H_

#include<stdio.h>
#include<stdlib.h>

struct NodeAVL{
	int key;
	int echi;
	NodeAVL *left, *right;
};

int max( int a, int b);
int maxPathLength(NodeAVL *p);
void computeBalanceFactor (NodeAVL *p);
NodeAVL* leftRotation (NodeAVL *p);
NodeAVL* rightRotation (NodeAVL *p);
NodeAVL* doubleLeftRotation (NodeAVL *p);
NodeAVL* doubleRightRotation (NodeAVL *p);
NodeAVL* balance (NodeAVL *p);
NodeAVL* insertAVLNode (NodeAVL *p, int x);
NodeAVL* deleteAVLNode (NodeAVL *p, int x);
void displayAVLTree (NodeAVL *p, int level);

#endif