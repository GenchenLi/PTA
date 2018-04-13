//Combine Order List
//如果不能定义新的List，那么按照刚开始的想法，移动其中一个链表的指针，会使得元素丢失。 
#include<stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Merge( List L1, List L2 );
int main()
{
    List L1, L2, L;
    //L1 = Read();
    //L2 = Read();
    L = Merge(L1, L2);
    //Print(L);
    //Print(L1);
    //Print(L2);
    return 0;
}

 if(pa->Data <= pb->Data)  
        {  
            pc->Next = pa;  
            pc = pa;  
            pa = pa->Next;  
        }  
        ///链表操作还是不太懂 
List Merge( List L1, List L2 )
{
	//List TmepPtr1,TmepPtr2;//题目要求要直接使用原序列中的节点 
List L = (List)malloc(sizeof(struct Node));
List LCopy=L;
while(L1->Next!=NULL&&(L2->Next!=NULL))
	{
	if((L1->Next)->Data<=(L2->Next)->Data)
		{
		LCopy->Next=L1->Next;
		LCopy=LCopy->Next;
		L1->Next=L1->Next->Next;
		
		//LCopy->Next=  Merge(L1->Next, L2->Next);
		} 
		
	else  	
	{
		LCopy->Next=L2->Next;
		LCopy=LCopy->Next;
			L2->Next=L2->Next->Next;
					
	//	LCopy->Next=  Merge(L1->Next, L2->Next);
	}

		
	}
	if(L1->Next != NULL) 
	{
		LCopy->Next = L1->Next;
		L1->Next = NULL;
	}
	if(L2 != NULL) 
	{
		LCopy->Next = L2->Next;
		L2->Next = NULL;
	}

	//if(L1->Next!=NULL)
	
	//else
	return L;
} 




