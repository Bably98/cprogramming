#include<stdio.h>
int main()
{
  int a=1,b,result;
  printf("please enter a number:");
  scanf("%d",&b);
  do
  {
      result=b*a;
      printf("\n%d x %d=%d",b,a,result);
      ++a;
  }
  while(a<=10);
  return 0;
}
