//PrimePair
#include<stdio.h>
#include<math.h>
int JudgePrime(int a,int Num)
{
	int i;
if((a==2)|| (a==3))	
	return 0;
	//else if((a>Num-2))
	//return 1;
	else
	{ 
	for(i=2;i<=sqrt(a);i++)
	{
if((a%i==0))   break;	
	}
	//i--;
	//if(i==int(sqrt(a)))	return 0;
	//else return 1;
	if(i>sqrt(a))
	return 0;
	else return 1;	
	} 
}
int main()
{
	int j,Num,PairNum=0;
	scanf("%d",&Num);
	for(j=2;j<=Num-2;j++)
{
    if(JudgePrime(j,Num)||(JudgePrime(j+2,Num)))
	continue;
	else
	PairNum++;
}
	printf("%d",PairNum);
return 0;	

//return udgePrime(6,28)  || JudgePrime(8,28));
 } 
