#include<stdio.h> 
//6-1
/*void PrintN ( int N )
{
int i;
	for(i=1:i<=N;i++)
	printf("%d",i);
}

//6-3
int Sum ( int List[], int N )
{
	int *p=List;
int SumList=0,i=0;
while(i<N)	
{
	SumList+=*p;
p++;
i++;
}
return SumList;	
}


//6-8
//?????Ϊʲô�еĲ��Ե�û��ͨ����?? 
int Factorial( const int N )
{
	
	int N_Copy=N;
	long long int Prdt=1;
	if(N_Copy>0)
	{

	for(;N_Copy>0;N_Copy--)
	{
	Prdt*=N_Copy;
		
	}
	return Prdt;
		}
		else if(N_Copy==0) return 1;
		else return 0;
	
}

int main()
{
printf("%d", sizeof(long long int));	
	return 0;
}
*/

//6-6
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
    int Data;  //�洢������� 
    PtrToNode Next;  //ָ����һ������ָ�� 
};
typedef PtrToNode List;  ���嵥�������� 

int FactorialSum( List L );

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for ( i=0; i<N; i++ ) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L; 
		 L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}


int FactorialSum( List L )
{
	int Sum=0,i,Data,Temp=1;
	List L_Copy=L;
		
	for(;L_Copy!=NULL;L_Copy=L_Copy->Next)
	{
	Data=L_Copy->Data;
	if(Data==0)
	Temp=1;
	else
	{
			for(;Data>0;Data--)
	{
	Temp*=Data;	
	}
	}
	
	
	Sum+=Temp;
	Temp=1;
	}
	return Sum;
}
*/
 //6-11 ���Զ�����Ԫ�����е���λ��
 /*#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

ElementType Median( ElementType A[], int N )
{
ElementType *p=A;	
	
	
}
*/
//7-29 ɾ���ַ����е��ִ�
 /*int main()
{
	char S1[80],S2[80],*pS1;
	scanf("%s",&S1);
	scanf("%s",&S2);
	pS1=S1;
	for(;*pS1!='\0';pS1)
	{
		
	}
printf("%s\n%s",S1);	
	return 0;
}
*/ 

//7-16 ����ϸ���������������
/*#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	
	printf()
	
 } 
 */
 //7-27 ð�ݷ�����
/*
 #include<stdio.h>
int main()
{
	int N,K,i,Cnt=0,Temp,Iter=0,N_Copy;
	scanf("%d %d",&N,&K);
	N_Copy=N;
	int Arr[N];
	for(i=0;i<N;i++)
	{scanf("%d",&Arr[i]);	}
	while(Iter!=K)
	{

	for(i=0;i<N_Copy-1;i++)
	{
	if(Arr[i]>Arr[i+1])	
	{Temp=Arr[i];Arr[i]=Arr[i+1];Arr[i+1]=Temp;Cnt++;};
	}
	Iter++;
	N_Copy--;
		}
		for(i=0;i<N;i++)
		if(i!=N-1)
	{printf("%d ",Arr[i]);	}
	else printf("%d",Arr[i]);
}
*/
 
//7-30 �ַ�����ð������
//��һ��string����Ĳ��� 
#include<stdio.h>
int main()
{
	int N,K,i,Cnt=0,Iter=0,N_Copy;
	scanf("%d %d",&N,&K);
	N_Copy=N;
	char Arr[N][10];
	char (*p)[10],(*q)[10];
		p=Arr;
		q=p+1;
	for(i=0;i<N;i++)
	{scanf("%s",p+i);	}
	
	while(Iter!=K)
	{

	for(i=0;i<N_Copy-1;i++)
	{
	if(Arr[i][0]>Arr[i+1][0])	
	{;
	=*q
	Arr[i]=Arr[i+1];
	Arr[i+1]=p;Cnt++;};
	}
	Iter++;
	N_Copy--;
		}
		for(i=0;i<N;i++)
		if(i!=N-1)
	{printf("%s\n",(p+i));	}
	else printf("%d",(p+i));
	

	
			}
