//0-树7 二叉搜索树的操作集 
//Binary Search Trees 
#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

void PreorderTraversal( BinTree BT ); /* 先序遍历，由裁判实现，细节不表 */
void InorderTraversal( BinTree BT );  /* 中序遍历，由裁判实现，细节不表 */

BinTree Insert( BinTree BST, ElementType X );
BinTree Delete( BinTree BST, ElementType X );
Position Find( BinTree BST, ElementType X );
Position FindMin( BinTree BST );
Position FindMax( BinTree BST );

int main()
{
    BinTree BST, MinP, MaxP, Tmp;
    ElementType X;
    int N, i;

    BST = NULL;
    scanf("%d", &N);
    for ( i=0; i<N; i++ ) {
        scanf("%d", &X);
        BST = Insert(BST, X);
    }
    printf("Preorder:"); PreorderTraversal(BST); printf("\n");
    MinP = FindMin(BST);
    MaxP = FindMax(BST);
    scanf("%d", &N);
    for( i=0; i<N; i++ ) {
        scanf("%d", &X);
        Tmp = Find(BST, X);
        if (Tmp == NULL) printf("%d is not found\n", X);
        else {
            printf("%d is found\n", Tmp->Data);
            if (Tmp==MinP) printf("%d is the smallest key\n", Tmp->Data);
            if (Tmp==MaxP) printf("%d is the largest key\n", Tmp->Data);
        }
    }
    scanf("%d", &N);
    for( i=0; i<N; i++ ) {
        scanf("%d", &X);
        BST = Delete(BST, X);
    }
    printf("Inorder:"); InorderTraversal(BST); printf("\n");

    return 0;
}

BinTree Insert( BinTree BST, ElementType X )
{
BinTree BST_Copy=BST;	
if(BST==NULL)
{
	BST=(BinTree)malloc(sizeof(BinTree));
X=BST->Data;
BST->Left=BST->Right=NULL;
}

else 
{
if(X>BST->Data)
{
BST->Right	=Insert(BST->Right,X);
}
else if(X<BST->Data)
BST->Left	=Insert(BST->Left,X);

 } 
return BST;		
}

BinTree Delete( BinTree BST, ElementType X )
{
	BinTree Tmp;
if(BST==NULL)	
	{
		printf("Not Found");
	return BST;	
	}
else
{
if(X>BST->Data)
BST->Right	=Delete(BST->Right,X);
else if(X<BST->Data)
BST->Left	=Delete(BST->Left,X);
else
{
	if(BST->Left&&(BST->Right))
	{
		
		Tmp=FindMax(BST->Left);
		BST->Data=Tmp->Data;
		BST->Left=Delete(BST->Left,Tmp->Data);
	
	Tmp=FindMin(BST->Right);                
                BST->Data = Tmp ->Data;
                BST->Right=Delete(BST->Right,BST->Data);
	}
	else if(BST->Left)
	{
		Tmp=BST;
	BST=BST->Left;
	free(Tmp);
	}
	else if(BST->Right)
	{
		Tmp=BST;
	BST=BST->Right;
	free(Tmp);
	}

	}	
	
}
	return BST;
}


Position Find( BinTree BST, ElementType X )
{
if(BST==NULL)	
	{
	return BST;	
	}
else
{
if(X>BST->Data)
BST->Right	=Find(BST->Right,X);
else if(X<BST->Data)
BST->Left=Find(BST->Left,X);
else
{
	return BST;
	}	
	
}	
	
}


Position FindMin( BinTree BST )
{
	if(BST->Left==NULL)
	return BST;
	else
	BST->Left=FindMin( BST->Left );
	
	
	
}
Position FindMax( BinTree BST )
{
if(BST->Right==NULL)
	return BST;
	else
	BST->Right=FindMax( BST->Right );//出错在哪儿？	
	
}






BinTree Delete( BinTree BST, ElementType X ){
    Position Tmp;
    if(!BST)    printf("Not Found\n");
    else {
        if( X < BST->Data)  
            BST ->Left = Delete(BST->Left, X);          /* ??????? */
        else if(X > BST->Data ) 
            BST ->Right = Delete(BST->Right , X);       /* ???????*/
        else {                                          /* ????????? */
            if(BST->Left && BST->Right) {               /* ???????????? */
                Tmp=FindMin(BST->Right);                /* ????????????????? */
                BST->Data = Tmp ->Data;
                BST->Right=Delete(BST->Right,BST->Data);/* ?????????????????? */
            }else {                                     /* ??????????????*/
                Tmp = BST;
                if(!BST->Left) BST = BST->Right;        /*?????????*/ 
                else if(!BST->Right)    BST = BST->Left;/*????,????else,??BST???NULL,????*/ 
                free(Tmp);                              /*??????????*/
            }
        }
    }
    return BST;
}

Position Find( BinTree BST, ElementType X ){
    if(!BST)    return NULL;
    if(BST->Data==X)    return BST; 
    if(X>BST->Data)     return Find(BST->Right,X);      
    if(X<BST->Data)     return Find(BST->Left,X);

                      
}

Position FindMin( BinTree BST ){
    if(BST){
        while(BST->Left){
            BST=BST->Left;
        }
    } 
    return BST; 
} 
Position FindMax( BinTree BST ){
    if(BST){
        while(BST->Right){
            BST=BST->Right;
        }
    } 
    return BST; 
}
