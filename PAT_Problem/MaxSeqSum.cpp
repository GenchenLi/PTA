/*//MaxSum ������к����� 
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
//��һ��д�����������������������ַǳ���Ļ����ڴ�Ϳ�������� 
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




