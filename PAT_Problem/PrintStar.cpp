//ע��ע�͵���������forѭ���������Ҫ���Ķ���Ļ��������еĴ�����ʵ���Ƕ���ģ�����Ҫ��� 

#include<stdio.h>
int main()
 {
 int StarNum,Layer,i,j;
 char chrct; 
 scanf("%d %c",&StarNum,&chrct);	

 for(Layer=1;2*Layer*Layer-1<=StarNum;Layer++);
 Layer--;
  //printf("%d\n",Layer);	
 //printf("%d",Layer);
 //TolLayer=2*Layer-1;
 for(i=1;i<=Layer;i++   )
 {
 for(j=1;(i-j)>0;j++)
  {printf(" ");}
  for(j=1;j<=1+2*(Layer-i);j++)  {printf("%c",chrct);  }
  // for(j=1;(i-j)>0;j++){printf(" ");}
  printf("\n");
  
  
  }
  
  for(i=2;i<=Layer;i++   ) 
 {
 for(j=i;(Layer-j)>0;j++)   {printf(" ");}
  for(j=1;j<=2*i-1;j++)  {printf("%c",chrct);  }
  // for(j=i;(Layer-j)>0;j++)   {printf(" k");}
 
  printf("\n");
  
  
  }
 // printf("%d\n%d",Layer,StarNum-(2*Layer*Layer-1));
 printf("%d",StarNum-(2*Layer*Layer-1));
  return 0;
  
  
 
  } 
  
