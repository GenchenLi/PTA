//02 线性结构3 Reversing Linked List
//右移或者左移k位是不是可以理解成k作为循环，反复调用移动函数k次？ 
#include<stdio.h>
typedef struct Node 
{
	int Ads;//address 
Node *Address; 
 int Data;
  Node *Next;
  int NextAds;//NextAddress;		
 }*List ;
 
int main()
{    int FstNd,FstNdCopy;
	int FirstNode,N,K,i,j;
	List Node[N],OdrNode,OdrCopy; 
	scanf("%d %d %d",&FirstNode,&N,&K);//输入首节点的地址，链表元素个数，移动长度 
	//FstNdCopy=FirstNode;
	j=FirstNode;
	OdrNode->Ads=FirstNode;
	OdrNode->Address=List(FirstNode);//可以这样强制转换吗？ 
	
for(i=0;i<N;i++)
{
scanf("%d %d %d",&FirstNode,&N,&K);	//还是按顺序，N是Data，K是Next的地址 
Node[i]->Ads=FirstNode;
Node[i]->Data=N;
Node[i]->NextAds=K;
}

for(i=0;i<N;i++)
{
if(Node[i]->Ads==j)
{
	OdrNode->Data=Node[i]->Data;
	break;
	}	
}
for(i=0;i<N;i++)
{

for(j=0;j<N;j++)
{

{if(Node[i]->Ads==OdrNode->Ads)
{
	 
	OdrNode->Data=Node[i]->Data;
	OdrNode->Ads=Node[i]->Ads;
	OdrNode->NextAds=Node[i]->NextAds	;
OdrNode->Address=List(Node[i]->Ads);
OdrNode->Next=Node[i]->Next	;

break;
}
}
}
}
//
for(i=0;i<N;i++)
{
if(i==N-1)
{
	printf("%d",OdrNode->Data);
}
else
{
	
printf("%d",OdrNode->Data);	
	}	
	
}
return 0;	
}
