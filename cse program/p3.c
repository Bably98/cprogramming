#include<stdio.h>
int main()
{
    int num,n,i=1,rem,binary=0;
    printf("enter a number=");
    scanf("%d",&num);
    n=num;

       while(num!=0)

       {
          rem=num%2;
          num=num/2;
          binary=binary+(rem*i);
          i=i*10;
        }
        printf("%d",binary);
    return 0;
}
