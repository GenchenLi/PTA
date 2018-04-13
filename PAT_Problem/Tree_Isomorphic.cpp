//03-树1 树的同构
/* 
#include<stdio.h>
typedef struct BinartTree{
char Data;
struct	BinartTree *LeftChiled,*NearSibling;
	
	
 } *BT;
int main()
{
	BT BinTree=(BT) malloc(sizeof(BT));
	BT BinTreeCopy=BinTree;
	char NodeValue,LftCld,RitChild;

	int N,i;
	scanf("%d",&N);
		char NdVl[N],Lft[N],Rit[N];
	for(i=0;i<N;i++)
	{
	scanf("%c %c %c",&NodeValue,&LftCld,&RitChild);	
	NdVl[i]=NodeValue;
	Lft[i]=LftCld;
	Rit[i]=RitChild;
	}
	
	for(i=0;i<N;i++)
	{
	BinTreeCopy->Data=NdVl[i];
	if(Lft[i]!='-')
	{
	BT LeftTree=(BT) malloc(sizeof(BT));	
	BinTreeCopy->LeftChiled=LeftTree;	
		}	
	if(Rit[i]!='-')
	{
	BT RightTree=(BT) malloc(sizeof(BT));	
	BinTreeCopy->NearSibling=RightTree;			
		}	
		
	}
	return 0;
 } 
 */
 
 /* 
 #include<stdio.h>
 typedef MaxSize 10
  struct BinaryTree
 {
 char Data;
 	int Left;
 	int Right;
 	
 } BiTr[MaxSize],BiTr2[MaxSize];
 typedef struct BinaryTree *PtrBT
 int CheckIsomorphic(PtrBT Ptr1,PtrBT Ptr2);
 int main()
 {
 	int N,i,Lft,Rit;Num,flag;
 	char Data;
	scanf("%d",&N);
 	return 0;
 	for(i=0;i<N;i++)
 	{
 	scanf("%c %d %d",&Data,&Lft,&Rit);	
    BiTr[i]->Data=Data;
   BiTr[i]-> Left=Lft;
 	BiTr[i]->Right=Rit;
	 }
	 Num=N;
	 
	 for(i=0;i<N;i++)
 	{
 	scanf("%c %d %d",&Data,&Lft,&Rit);	
    BiTr2[i]->Data=Data;
   BiTr2[i]-> Left=Lft;
 	BiTr2[i]->Right=Rit;
	 }
	 PtrBT Ptr1=&BiTr,Ptr2=&BiTr2;
	 if(N!=Num)
	 {printf("No");return 0;}
	 else
	 {
	 	flag=CheckIsomorphic(Ptr1,Ptr2);
	 }
	 if(flag==1)
	 {printf("Yes");}
	 else printf("No");
	 return 0;  
  } 
  
  CheckIsomorphic(PtrBT Ptr1,PtrBT Ptr2)
  {
  	
  	
  	
  }
  
  */ 
  
  
  #include<stdio.h>
  #define MaxSize 10
  struct BinaryTree
 {
 char Data;
 	int Left;
 	int Right;
 	
 } BiTr[MaxSize],BiTr2[MaxSize];
// typedef struct BinaryTree *PtrBT
 int BuildTree(struct BinaryTree*,int );	
 int CheckIsomorphic(struct BinaryTree *Ptr1,int ,int ,struct BinaryTree *Ptr2,int ,int );
 
  int main(){
  	int Root,Root1,N,M;
  	 scanf("%d",&N);
  Root=BuildTree(BiTr,N);
  scanf("%d",&M);	
  	Root1=BuildTree(BiTr2,M);
  	printf("%d\n%d\n",Root,Root1);
  	if(CheckIsomorphic(BiTr,N,Root,BiTr2,M,Root1)) 
  	{printf("Yes");  }
  	else printf("No");
  	return 0;
  }
  
  int BuildTree(struct BinaryTree Tr[],int N){
  int i,RtNd;
  char LftMrk,RgtMrk;
 
  int PtrFlag[N]; 
  for(i=0;i<N;i++)	PtrFlag[i]=0;
  for(i=0;i<N;i++)
  {
  scanf("\n%c %c %c",&Tr[i].Data,&LftMrk,&RgtMrk);
  if(LftMrk!='-')
  {
  	Tr[i].Left=LftMrk-'0';
  	PtrFlag[Tr[i].Left]=1;
	  }	
  else Tr[i].Left=-1;
  if(RgtMrk!='-')	
	  {Tr[i].Right=RgtMrk-'0';
	  	PtrFlag[Tr[i].Right]=1;}
	  	 else Tr[i].Right=-1;
	  }
 
	for(i=0;i<N;i++)
	{
		if(PtrFlag[i]==0)
		break;
	  }  
	  RtNd=i;
	  return RtNd;
	  	
  	
  	
  }	
 
 int CheckIsomorphic(struct BinaryTree *Ptr1,int N1,int R1,struct BinaryTree *Ptr2,int N2,int R2){
 	if(N1!=N2)
 	return 0;
 	if(Ptr1[R1].Data!=Ptr2[R2].Data)
 	return 0;
 	if(((R1==-1)&&(R2!=-1)||((R1!=-1)&&(R2==-1))))//如果一个为空一个不为空则不是同构的
        return 0;

 	if(Ptr1[R1].Left==-1&&(Ptr2[R2].Left==-1))
 	return CheckIsomorphic(Ptr1,N1,Ptr1[R1].Right,Ptr2,N2,Ptr1[R1].Right);
 	
 
 	if((Ptr1[R1].Left!=-1&&(Ptr2[R2].Left!=-1)))//左右都不空
	  return CheckIsomorphic(Ptr1,N1,Ptr1[R1].Left,Ptr2,N2,Ptr1[R1].Left)&&CheckIsomorphic(Ptr1,N1,Ptr1[R1].Right,Ptr2,N2,Ptr1[R1].Right);
	  else
	  return CheckIsomorphic(Ptr1,N1,Ptr1[R1].Left,Ptr2,N2,Ptr1[R1].Right)&&CheckIsomorphic(Ptr1,N1,Ptr1[R1].Right,Ptr2,N2,Ptr1[R1].Left);;
 }
 
