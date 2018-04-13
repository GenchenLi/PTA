
//6-1单链表 反转 
/*
List Reverse( List L )
{
	List p,q,pr;
	q=L;
	p=L->Next;
	L->Next=NULL;
	if((p!=NULL))
{
		while(p!=NULL)
	{
		pr=p->Next;
p->Next=q;
q=p;
p=pr;
	}
	return q;
}
else
{
	
}
}
*/
//6-2 顺序表操作集
//为什么只通过了一个案例？
/* 
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5
#define ERROR -1
//typedef enum {false, true} bool;
typedef int ElementType;
typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; 
};

List MakeEmpty(); 
Position Find( List L, ElementType X );
bool Insert( List L, ElementType X, Position P );
bool Delete( List L, Position P );

int main()
{
    List L;
    ElementType X;
    Position P;
    int N;

    L = MakeEmpty();
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        if ( Insert(L, X, 0)==false )
            printf(" Insertion Error: %d is not in.\n", X);
    }
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        P = Find(L, X);
        if ( P == ERROR )
            printf("Finding Error: %d is not in.\n", X);
        else
            printf("%d is at position %d.\n", X, P);
    }
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &P);
        if ( Delete(L, P)==false )
            printf(" Deletion Error.\n");
        if ( Insert(L, 0, P)==false )
            printf(" Insertion Error: 0 is not in.\n");
    }
    return 0;
}
List MakeEmpty(); 
Position Find( List L, ElementType X );
bool Insert( List L, ElementType X, Position P );
bool Delete( List L, Position P ); 

List MakeEmpty()
{
List L;
 L=(List) malloc(sizeof(List));
L->Last=-1;
return L;

}

Position Find( List L, ElementType X )
{
Position PosX=0;
List LCopy=L;
while(PosX<MAXSIZE)
{
if(LCopy->Data[PosX]==X)
{
return PosX;	
	}	
PosX++;	
}
if(PosX==MAXSIZE)
return ERROR;
} 

bool Insert( List L, ElementType X, Position P )
{
	int i;
	 if((L->Last)+1>=MAXSIZE)
	{
		printf("FULL");
		return false;
	}
else if(P>=MAXSIZE||(P<0))   //这里是出错的地方，因为顺序表的元素在存储空间上必须是连续的，所以插入位置最多再last位置的后一位插入，再往后插入就会使得元素不连续了 
{
printf("ILLEGAL POSITION");
return false;	
	}	
	
	else
	{
		
		
		
				for(i=L->Last;i>=P;i--)
		{
			L->Data[i+1]=L->Data[i];
		}
	L->Data[P]=	X;
	L->Last=L->Last+1;
		
	
	return true; 
	}	
}

bool Delete( List L, Position P )
{
	int i;
if(P>L->Last||(P<0))
{
	printf("POSITION %d EMPTY",P);
	return false;
	}
	else
	{
	for(i=P;i<=(L->Last)-1;i++)
	L->Data[i]=L->Data[i+1];
	L->Last=L->Last-1;
	return true;	
	}	
}

*/ 

//6-3 求链式表的长度
/*
int Length( List L )
{
	List L_Copy=L;
int Cnt=0;

while(L_Copy->Next!=NULL)
{
	
 L_Copy=L_Copy->Next;
	Cnt++;
		
}
return Cnt;		
 } 
 */
 
 //6-4  找到并返回链式表的第k个元素
 //为什么还是有不通过的点 
 /* 
 ElementType FindKth( List L, int K )
 {
 int CurrPos=1,Cnt=0;
 List LCopy=L;
 //Ele=LCopy->Data;
 

 while(LCopy!=NULL)
{
 LCopy=LCopy->Next;
	Cnt++;		
}
LCopy=L;
if(L==NULL) return ERROR;   
else if((K>Cnt)||(K<1))   ////这里是出错点，刚开始忘了加K《1 
return ERROR;
else
{
while(CurrPos<K)
 {
 
 		LCopy=LCopy->Next;	
 CurrPos++;	  
	 }	
	 return LCopy->Data;	

}
}
   */ 
  
  /*
  // 链式表操作集
 #include<stdio.h> 
 #include<stdlib.h>
  #define ERROR NULL
typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode Position;
typedef PtrToLNode List;

Position Find( List L, ElementType X );
List Insert( List L, ElementType X, Position P );
List Delete( List L, Position P );

int main()
{
    List L,LCopyM;
    ElementType X,i;
    Position P, tmp;
    int N;

    L = NULL;
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        L = Insert(L, X, L);
        if ( L==ERROR ) printf("Wrong Answer\n");
    }
    tmp=L;
    /*
	while(tmp!=NULL)
    {
    	printf("%d",tmp->Data);
    	tmp=tmp->Next;
	}
   //验证插入的是否正确 
List K[10];
LCopyM=L;
i=sizeof(List);
for(i=0;LCopyM!=NULL;i++)
{
K[i]=LCopyM;
LCopyM=LCopyM->Next;	
	
}
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        P = Find(L, X);
        if ( P == ERROR )
            printf("Finding Error: %d is not in.\n", X);
        else {
            L = Delete(L, P);
            printf("%d is found and deleted.\n", X);
            if ( L==ERROR )
                printf("Wrong Answer or Empty List.\n");
        }
    }
    L = Insert(L, X, NULL);
    if ( L==ERROR ) printf("Wrong Answer\n");
    else
        printf("%d is inserted as the last element.\n", X);
    P = (Position)malloc(sizeof(struct LNode));
    tmp = Insert(L, X, P);
    if ( tmp!=ERROR ) printf("Wrong Answer\n");
    tmp = Delete(L, P);
    if ( tmp!=ERROR ) printf("Wrong Answer\n");
    for ( P=L; P; P = P->Next ) printf("%d ", P->Data);
    return 0;
}

  
Position Find( List L, ElementType X )
{
if(L==NULL) return ERROR;  	
int CurrPos=1,Cnt=0;
 List LCopyF=L;
 while(LCopyF!=NULL)
{
	if(X==LCopyF->Data)
	{
			return LCopyF;
			break;
	}

	else  
	{
		LCopyF=LCopyF->Next;
	//Cnt++;
	}
 		
}
if(LCopyF==NULL)	
return ERROR;
} 
//用不用考虑P=NULL的情况? 
List Insert( List L, ElementType X, Position P )
{
	List LCopyI=L,Tmp,IsrtNode;
if(L==NULL)
{
	L=(List) malloc(sizeof(List)) ;
	L->Data=X;
	L->Next=NULL;
	return L;
	}	
else
{
	if(L==P)
	{
		Tmp=(List) malloc(sizeof(List));
	Tmp->Data=X;
	Tmp->Next=P;
	return Tmp;	
	}
	/*else if(P==NULL)
	{
printf("Wrong Position for Insertion");	
return ERROR;		
	}
	
	else
	{
		if(P==NULL)
		{
				while(LCopyI->Next!=P)
	{
	LCopyI=LCopyI->Next;	
	}
	
		Tmp=(List) malloc(sizeof(List));
	Tmp->Data=X;
	Tmp->Next=P;
	LCopyI->Next=Tmp;
	return L;	
	
		}

	else
	{
		while(LCopyI->Next!=P&&LCopyI->Next!=NULL)
	{
	LCopyI=LCopyI->Next;
	}
	if(LCopyI->Next==NULL)
	{
		printf("Wrong Position for Insertion\n");
		return ERROR;
	}
	else
	{
	Tmp=(List) malloc(sizeof(List));
	Tmp->Data=X;
	Tmp->Next=P;
	LCopyI->Next=Tmp;
	return L;		
	}
	 } 
	
	

	
	}	

}
}
/* 
List Delete( List L, Position P )
{
	List LCopyD=L;
//	P=List(P); 
	if(P==NULL||(L=NULL))
	{
		printf("Wrong Position for Deletion");	
return ERROR;
	}
	
		//if(P==L) 
		if(P==L)
	{
	L=L->Next;
	free(LCopyD);
	return L;	
	}
	
	while(LCopyD)
	{
		if(P!=LCopyD->Next)
	LCopyD=LCopyD->Next;		
	}
	if(LCopyD==NULL)
	{
		printf("Wrong Position for Deletion");	
return ERROR;
	}
	else{
		L->Next=P->Next;
		free(P);
		return L;
	}
}
*/ 
	
	
/*
List Delete( List L, Position P )
{
  
    if(L==NULL||P==NULL){  
        printf("Wrong Position for Deletion\n");  
        return ERROR;  
    }else{  
        List ans = L;  
        if(P==L){  
            ans = L->Next;  
            return ans;  
        }else{  
            while(L->Next!=P&&L->Next!=NULL){  
                L = L->Next;  
            }  
            if(L->Next==NULL){  
                printf("Wrong Position for Deletion\n");  
                return ERROR;  
            }else{  
//              L->Next = L->Next->Next;  
//              return L;   //?????,??????   
                L->Next = L->Next->Next;  
                return ans;  
            }  
        }  
    }
}
*/
 
/* 
//6-7 在一个数组中实现两个堆栈
#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define ERROR 1e8
typedef int ElementType;
typedef enum { push, pop, end } Operation;
//typedef enum { false, true } bool;
typedef int Position;
struct SNode {
    ElementType *Data;
    Position Top1, Top2;
    int MaxSize;
};
typedef struct SNode *Stack;

Stack CreateStack( int MaxSize );
bool Push( Stack S, ElementType X, int Tag );
ElementType Pop( Stack S, int Tag );

Operation GetOp();  // details omitted 
void PrintStack( Stack S, int Tag ); // details omitted 

int main()
{
    int N, Tag, X;
    Stack S;
    int done = 0;

    scanf("%d", &N);
    S = CreateStack(N);
    while ( !done ) {
        switch( GetOp() ) {
        case push: 
            scanf("%d %d", &Tag, &X);
            if (!Push(S, X, Tag)) printf("Stack %d is Full!\n", Tag);
            break;
        case pop:
            scanf("%d", &Tag);
            X = Pop(S, Tag);
            if ( X==ERROR ) printf("Stack %d is Empty!\n", Tag);
            break;
        case end:
            PrintStack(S, 1);
            PrintStack(S, 2);
            done = 1;
            break;
        }
    }
    return 0;
}

Stack CreateStack( int MaxSize )
{
Stack Sta;
Sta=(Stack) malloc(sizeof(Stack));
Sta->MaxSize=MaxSize;
Sta->Top1=-1;
Sta->Top2=MaxSize;
Sta->Data=(ElementType *) malloc(sizeof(ElementType *)*MaxSize);
return Sta;	
	
}

bool Push( Stack S, ElementType X, int Tag ){
	if((S->Top1)+1==S->Top2)
		{printf("Stack Full\n");
	return false;
	}
	
	if(Tag==1)
	{
	S->Top1++;
	S->Data[S->Top1]=X;	
	}
	else
	{
		S->Top2--;
	S->Data[S->Top2]=X;
		//S->Data++;	
	}
	return true;
}

ElementType Pop( Stack S, int Tag )
{
	int RtVl;
if(Tag==1&&S->Top1==-1)
{
	printf("Stack %d Empty\n",Tag);
	return ERROR;
	}	
	if(Tag==2&&S->Top2==S->MaxSize)
{
	printf("Stack %d Empty\n",Tag);
	return ERROR;
	}
	if(Tag==1)
	{
		RtVl=S->Data[S->Top1];
		//S->Data--;
		S->Top1--;
		}	
		else
		{
			RtVl=S->Data[S->Top2];
				//S->Data--;
		S->Top2++;
		}
		return RtVl;
}
 
 Operation GetOp(){
    char a[5];
    scanf("%s",a);
    if(strcmp(a,"Push")==0) return push;
    if(strcmp(a,"Pop")==0) return pop;
    if(strcmp(a,"End")==0) return end;
}
void PrintStack( Stack S, int Tag ){
    if(Tag==1){
        printf("Pop from Stack %d: ",Tag);
        while((S->Top1)!=-1){
            printf("%d ",S->Data[(S->Top1)--]);
        } 
        putchar('\n');
    }else{
        printf("Pop from Stack %d: ",Tag);
        while((S->Top2)!=S->MaxSize){
            printf("%d ",S->Data[(S->Top2)++]);
        }
        putchar('\n');
    }
}
*/ 

//6-8 求二叉树高度

#include<stdio.h>

int GetHeight( BinTree BT ){
BinTree BTCopy=BT;
int LftHgt=RgtHgt=0;
if(BT!=NULL)
{LftHgt=GetHeight(BT->Left);
RgtHgt=GetHeight(BT->Right);
return (LftHgt>RgtHgt)?LftHgt:RgtHgt;	}	
	else
	return 0;
	
	
}

//6-9 二叉树的遍历
#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

BinTree CreatBinTree(); /* 实现细节忽略 */
void InorderTraversal( BinTree BT );
void PreorderTraversal( BinTree BT );
void PostorderTraversal( BinTree BT );
void LevelorderTraversal( BinTree BT );

int main()
{
    BinTree BT = CreatBinTree();
    printf("Inorder:");    InorderTraversal(BT);    printf("\n");
    printf("Preorder:");   PreorderTraversal(BT);   printf("\n");
    printf("Postorder:");  PostorderTraversal(BT);  printf("\n");
    printf("Levelorder:"); LevelorderTraversal(BT); printf("\n");
    return 0;
}

void InorderTraversal( BinTree BT )
{
	
	
	
}

void PreorderTraversal( BinTree BT ){
	BinTree BTCopy=BT;
	printf(" %c",BTCopy->Data);
	while(BTCopy->Left!=NULL)
	{
	PreorderTraversal(BTCopy->Left);
	}
	while(BTCopy->Right!=NULL)
	{PreorderTraversal(BTCopy->Right);
	}
}
void InorderTraversal( BinTree BT ){
	BinTree BTCopy=BT;
		while(BTCopy->Left!=NULL)
	{
	PreorderTraversal(BTCopy->Left);
	}
		printf(" %c",BTCopy->Data);
		while(BTCopy->Right!=NULL)
	{PreorderTraversal(BTCopy->Right);
	}
}
 

