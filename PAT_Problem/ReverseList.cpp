//02 ���Խṹ3 Reversing Linked List
//���ƻ�������kλ�ǲ��ǿ�������k��Ϊѭ�������������ƶ�����k�Σ� 
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
	scanf("%d %d %d",&FirstNode,&N,&K);//�����׽ڵ�ĵ�ַ������Ԫ�ظ������ƶ����� 
	//FstNdCopy=FirstNode;
	j=FirstNode;
	OdrNode->Ads=FirstNode;
	OdrNode->Address=List(FirstNode);//��������ǿ��ת���� 
	
for(i=0;i<N;i++)
{
scanf("%d %d %d",&FirstNode,&N,&K);	//���ǰ�˳��N��Data��K��Next�ĵ�ַ 
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
