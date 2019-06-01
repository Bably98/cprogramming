#include<stdio.h>
int main()
{
    int i,j,a;
    printf("enter a number=");
    scanf("%d",&a);
    for(i=1;i<=a;i=i+1)
    {
        for(j=1;j<=i;j=j+1)
        {
          printf("*");
        }

          printf("\n");
    }
    return 0;
}
