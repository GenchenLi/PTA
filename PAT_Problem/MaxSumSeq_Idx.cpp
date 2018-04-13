//Maximum Subsequence Sum
//在原来简单问题：最大子列和的基础上改进 
//falg==1,表示需要更新，falg==0，表示不需要更新 
//有两类没有解决，一类是负数和0，另一类是最大子列和末尾为0，如何添上这个0? 
#include<stdio.h>
int main()
{

 int K;
scanf("%d",&K);
 int Arr,i,HeadTail[5],flag[2],ThisSum=0,MaxSum=0,MaxSum_Ever;
    flag[1]=0; 	

		for(i=0;i<K;i++)
	{
		scanf("%d",&Arr);
		if(i==0)
		{
		HeadTail[0]=Arr;
		HeadTail[1]=Arr;
		HeadTail[2]=Arr;
		HeadTail[4]=Arr; 
		}
		
		
	ThisSum+=Arr;
	if(flag[1]==1&&(Arr==0))
	{HeadTail[1]=Arr;}
	if(ThisSum>MaxSum)
{MaxSum=ThisSum;
HeadTail[2]=Arr;
if(flag[1]==1)
		{HeadTail[1]=Arr;  flag[1]=0;}
}	
//else if((ThisSum<=MaxSum))
//{HeadTail[1]=HeadTail[4];}
	else if(ThisSum<0)
	{ThisSum=0;
	flag[1]=1;
	HeadTail[4]=HeadTail[1];}
	}
HeadTail[3]=Arr;
	printf("%d",MaxSum);
	if(MaxSum==0)
	printf(" %d %d",HeadTail[0],HeadTail[3]);
	else printf(" %d %d",HeadTail[1],HeadTail[2]);
return 0; 
	
	
	
}

//10
//-10 1 2 3 4 -5 -23 3 7 -21
