// Have Fun with Nunmbers
#include<stdio.h>
#include<string.h> 
int main()
{
	char Num[21];//��һλ��ĩβ��\0; 
	int j,k,InputNum,i=0,flag[10]={0},NumDbl[21]; //NumDbl�Ķ����Ǻ�ϸС��ϸ�ڣ�ע����ʵӦ�������NumDbl[21],���ǵ����н�λ������ 
	NumDbl[0]=0;InputNum=0;
	scanf("%s",&Num);
	//printf("%s",Num);
for(i=strlen(Num);i>=1;i--)			
{
flag[Num[i-1]-'0']++;
NumDbl[i]=((Num[i-1]-'0')*2+InputNum)%10;
if((Num[i-1]-'0')*2+InputNum>=10)
	{		InputNum=1;} 
else
	{			InputNum=0;} 
		flag[ NumDbl[i] ]--;		   


}
NumDbl[0]=InputNum;
	//j=i;
InputNum=0;//������ʵ����Ҫ��i--�����ǵ����ܽ�λ������ 

for(i=0;i<10;i++) 	{ 
if(flag[i]!=0) 		{break;}

}
	
if(i==10)	
{printf("Yes\n");	}	
else	
{printf("No\n");}
if(NumDbl[0]==0)	i=1;
else i=0;
for(;i<=strlen(Num);i++)
{printf("%d",NumDbl[i]);}


         


	
	return 0;



}

 




