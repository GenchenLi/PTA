#include<stdio.h>
#define Max 5
struct ArrTest
	{
		int aa;
	int	Data[5];
	} *AT;

struct stu {
char name[11];
int age;
double socre[3];
}stud , *pst=&stud;




int add(int a)
{
	int b=6;
if(a==0)
printf("%d",a);
else 
{
	a=add(--a);	
	printf("Continue");
	printf("%d",a);
}
 } 

int main()
{ 
add(5);
return 0;
//	AT->aa=8;
	//AT->Data[4]=6;
	//printf("%d",AT->Data[4]); 
	//pst->age=5;
	//pst->socre[2]=1.7;
	//return 0;

//stud.age=10;
 } 
