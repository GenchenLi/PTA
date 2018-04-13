#include<stdio.h>

int main()
{
	int N,M,Entry,i,j;
scanf("%d %d",&N,&M)	;
int Arr[N];
for(i=0;i<N;i++)
{scanf("%d",&Entry);   Arr[i]=Entry;	}
for(i=0;i<(M%N);i++)
{
	Entry=Arr[N-1];
	for(j=N-1;j>=1;j--) 	Arr[j]=Arr[j-1];   
	Arr[0]=Entry;	
}



for(i=0;i<N;i++)	
{
	if(i==N-1)
		printf("%d",Arr[i]);
	else
	printf("%d ",Arr[i]);
}

return 0;	
 } 
 
