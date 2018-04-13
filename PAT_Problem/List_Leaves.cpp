//List Leaves
#include<stdio.h>
#define MaxSize 10
 struct BiTr{
	int NdVl;  
	int Left;
	int Right;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
};
typedef struct BiTr BT;
int BuildTree(BT*,int N);
ListAllLeaves(BT BinTr[],int N);
int main(){
	int i,N,Root;
	scanf("%d",&N);
	BT BiTree[N];
	Root=BuildTree(BiTree,N);
	/*
	printf("\n%d",Root);
	printf("\n%d %d",)
	for(i=0;i<N;i++)
	{
		if(BiTree[i].NdVl==Root)
		{
			printf("\n %d %d",BiTree[i].Left,BiTree[i].Right);
			break;
			}	
	}
*/
ListAllLeaves();
return 0;	
} 
int BuildTree(BT BinTr[],int N){
	int i,Check[N];
	char lft,rgt;
	for(i=0;i<N;i++) Check[i]=0;
	for(i=0;i<N;i++)
	{
		BinTr[i].NdVl=i;
		scanf("\n%c %c",&lft,&rgt);
		if(lft!='-')
		{
		BinTr[i].Left=lft-'0';	
		Check[BinTr[i].Left]=1;
		}
		else{
		BinTr[i].Left=-1;	
		}
		if(rgt!='-')
		{			
		BinTr[i].Right=rgt-'0';
		Check[BinTr[i].Right]=1;
		}
else
{
BinTr[i].Right=-1;	
}

	}
	for(i=0;i<N;i++)
	{
		if(!Check[i])
		break;
	}
	return i;
}

ListAllLeaves(BT BinTr[],int N){
	
	if(==-1&&==-1)
	{
		printf(" %d",);
	}
	
}
