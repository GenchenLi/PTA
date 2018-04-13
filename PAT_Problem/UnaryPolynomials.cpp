//unary polynomials of add and multiply 
//思路，因为输入的多项式是只含有系数非0项的倍数系数和指数系数，所以我们不需要根据x的最高项来设计存储空间，而是采用 

#include<stdio.h>
int main()
{
	int K1,i,K2,j=1,k=1;
	scanf("%d",&K1);
	int Arr1[2*K1];
	for(i=0;i<2*K1;i++)
	{scanf("%d",&Arr1[i]);	}
	scanf("%d",&K2);
	int Arr2[2*K2];
		for(i=0;i<2*K2;i++)
	{scanf("%d",&Arr2[i]);	}
	int Rlt[2*(K1+K2)];
	Rlt[2*(K1+K2)]={0};
	for(i=1;i<2*(K1+K2);i+=2)
	{
		//如果其中一个数组已经搜索完毕 
	if(j>=2*K1||(k>=2*K2))	
	{break;}
	
	
	if(Arr1[j]>Arr2[k])	
	{
	Rlt[i]=Arr1[j];  
	Rlt[i-1]=Arr1[j-1];	
	j+=2; 
		}
	else if((Arr1[j]<Arr2[k])) 
	{
	Rlt[i]=Arr2[k];   Rlt[i-1]=Arr2[k-1]; k+=2;}
	else {
	Rlt[i]=Arr1[j];
	Rlt[i-1]=Arr1[j-1]+Arr2[k-1];
	j+=2;
	 k+=2;
	}
	}
	if(j>=2*K1&&((k<2*K2)))
	{
		for(;k<2*K2;k+=2)
		{Rlt[i]=Arr2[k];   Rlt[i-1]=Arr2[k-1];i+=2;}
	}
	else if(k>=2*K2&&((j<2*K1)))
		{
		for(;j<2*K1;j+=2)
		{Rlt[i]=Arr1[j];   Rlt[i-1]=Arr1[j-1];i+=2;}
	}
	
	
	printf("\n");
	for(j=0;j<=i-3;j++)
{if(Rlt[j]!=0)printf(" %d %d",Rlt[j],Rlt[j+1]);	}
	return 0;
}


#include<stdio.h>

#define N 10000

int main() {
    int a[N]= {0};
    int b[N]= {0};
    int c[N]= {0};
    int d[N]= {0};
    int i,m,f;
    scanf("%d",&i);
    while(i--) {
        scanf("%d %d",&m,&f);
        a[f]+=m;
    }
    scanf("%d",&i);
    while(i--) {
        scanf("%d %d",&m,&f);
        b[f]+=m;
    }
    for(int i=N-1; i>=0; i--) {
        if(a[i]) {
            for(int j=0; j<N; j++) {
                if(b[j]) {
                    c[i+j]+=a[i]*b[j];
                }
            }
        }
    }
    int cnt=0;
    for(int i=N-1; i>=0; i--) {

        if(c[i]) {
            if(cnt)printf(" ");
            printf("%d %d",c[i],i);
            cnt++;
        }

    }
    if(!cnt)printf("0 0");

    for(int i=N-1; i>=0; i--)
        if(a[i])
            d[i]+=a[i];
    for(int j=0; j<N; j++)
        if(b[j])
            d[j]+=b[j];

printf("\n");

     cnt=0;
    for(int i=N-1; i>=0; i--) {

        if(d[i]) {
            if(cnt)printf(" ");
            printf("%d %d",d[i],i);
            cnt++;
        }

    }
    if(!cnt)printf("0 0");
    return 0;
}
