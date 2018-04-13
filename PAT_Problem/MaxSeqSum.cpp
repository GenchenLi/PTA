/*//MaxSum 最大子列和问题 
#include<stdio.h> 
//int MaxSum();
int main()
{
 int K;
scanf("%d",&K);
 int Arr[K],i,ThisSum=0,MaxSum=0;
for(i=0;i<K;i++)      	{scanf("%d",&Arr[i]);}

		for(i=0;i<K;i++)
	{
	ThisSum+=Arr[i];
	if(ThisSum>MaxSum)
	MaxSum=ThisSum;
	else if(ThisSum<0)
	ThisSum=0;
	}

	printf("%d",MaxSum);
return 0; 
}
*/

//for(i=0;i<K;i++)      	{printf("%d",Arr[i]);}		
#include<stdio.h> 
//int MaxSum();
//上一种写法的问题在于如果输入的数字非常多的话，内存就可能溢出了 
int main()
{
 int K;
scanf("%d",&K);
 int Arr,i,ThisSum=0,MaxSum=0;
     	

		for(i=0;i<K;i++)
	{
		scanf("%d",&Arr);
	ThisSum+=Arr;
	if(ThisSum>MaxSum)
	MaxSum=ThisSum;
	else if(ThisSum<0)
	ThisSum=0;
	}

	printf("%d",MaxSum);
return 0; 
}




