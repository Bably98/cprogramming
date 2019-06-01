#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=54;i<=300;i++)
    {
       if(i%9==0)
       {
          printf("%d\n",i);
          sum=sum+i;
          printf("sum=%d\n",sum);
       }

    }

    return 0;
}
