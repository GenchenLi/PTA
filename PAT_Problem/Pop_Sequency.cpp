//02 线性结构4 Pop Sequence
/*
#include<stdio.h>
//#include<stack>  c语言不自带栈操作的头文件吗，？
#define MaxSize 1000
#define  FALSE 1
#define  TRUE  0
typedef struct Node{
int Data[MaxSize];
int cap;
int top;	
} Stack;
void CreatStack(int M);
Push(int ele);
Pop()
int Check(Stack sta,int ele); 
int main()
{
	int M,N,K,i,j,k,flag=0;
scanf("%d %d %d",&M,&N,&K);//M:栈的最大容量；N：要Push的数据个数，从1-N；K：给出K个排列组合 
Stack sta;
int num[N];
&sta=CreatStack(M);
for(i=0;i<N,i++)
{scanf("%d",num[i]);}

for(i=0;i<K;i++)
{
for(j=0;j<N;j++)	
{scanf("%d",num);
if(flag==0)
{
	if(Check(sta,num)==FALSE)
	flag=1;
}
	
}
if(flag==0)
printf("YES");
else printf("NO");
}
return 0;	
 } 
Stack *CreatStack(int M)
{
	Stack *PtrS=(Stack *)malloc(sizeof(Stack));
	PtrS->cap=M-1;
	PtrS->top=-1;
	return PtrS;
}
Push(Stack stack,int ele)
{
if(((stack.top)+1)==stack.cap)	
	{
			printf("Full Stack, can't Push");
			return FALSE;
	}
else
{
	top++;
	stack[top]=ele;
	return TRUE;
}	
}

Pop(Stack stack)
{
if(top==-1)
{
	printf("Empty Stack, can't Pop");
	}	
	else
	{ 
top--; 
}
} 
int Check(Stack sta,int ele)
{
int i,flag;
for(i=1;i<=ele;i++)
{flag=Push(sta,i);
if(flag==FALSE)
return flag	}
Pop(sta,ele);
	return TRUE;
}
*/

#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    int stack[1005];  
    int top;  
    int m,n,k;  
    scanf("%d%d%d",&m,&n,&k);  
    for(int i=1;i<=k;i++){  
    top=-1;  
    int flag=1;  
    int now=1;  
    int number;  
    for(int j=1;j<=n;j++){  
    scanf("%d",&number); 
while(flag&&((top+1)==0||stack[top]!=number))
{
	stack[++top]=now;
	if(top>=m)
	{flag=0;break; 
	}
now++;	
}
if((flag==1&&(stack[top]==number)))
top--;



}
if(flag)  
            printf("YES\n");  
        else  
            printf("NO\n");  
}
return 0;
}
