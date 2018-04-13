//C语言程序设计 浙大版
//??10-8 递归实现顺序输出整数 
/*
#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;
	
    scanf("%d", &n);
    printdigits(n);

    return 0;
}
 void printdigits( int n )
 {
 	int Quo,Rem,Rlt;
 	Quo=n/10;
 	Rem=n-Quo*10;
 	if(Quo==0)
 	{
  printf("%d",Rem);
	 }
	 else { 
	printdigits( Quo);
	  printf("%d",Rem);}
	
	 
  } 
  */
  
  
  //练习4-10  找出最小值 
  #include<stdio.h>
int main()
{
	int N,K,i,Cnt=0,Temp,Iter=0,N_Copy;
	scanf("%d",&N);
	N_Copy=N;
	int Arr[N];
	for(i=0;i<N;i++)
	{scanf("%d",&Arr[i]);	}
while(N_Copy>0)
{
	for(i=0;i<N_Copy-1;i++)
	{
	if(Arr[i]>Arr[i+1])	
	{Temp=Arr[i];Arr[i]=Arr[i+1];Arr[i+1]=Temp;Cnt++;};
	}
	Iter++;
	N_Copy--;	
}

		
 printf("%d",Arr[0]);
}
