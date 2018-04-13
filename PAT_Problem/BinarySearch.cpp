#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};
struct LNode LData;
Position BinarySearch( List L, ElementType X );
//12 31 55 89 101

int main()
{
    List L=&LData;
    ElementType X;
    Position P;
   L->Last=5;
   L->Data[1]=12;
    L->Data[2]=31;
 L->Data[3]=55;
  L->Data[4]=89;
   L->Data[5]=101;
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

Position BinarySearch( List L, ElementType X )
{
	Position mid,Head=1,Tail=L->Last,flag=0;
	while(Tail-Head>1)
	{
if((Tail-Head)%2==0)
mid=(Tail+Head)/2;
else
mid=(Tail+Head)/2+1;
	
	if(L->Data[mid]==X)
	{flag=mid;break;}
	else if(L->Data[mid]>X)	
	Tail=mid;
	else Head=mid;

	}
	if(flag!=0)
	return flag;
	else if(L->Data[Tail]==X)
	return Tail;
		else if(L->Data[Head]==X)
	return Head;
	else return NotFound;
}

