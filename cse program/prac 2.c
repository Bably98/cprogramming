#include<stdio.h>
int main()
{
    int i,a[9]={39,89,19,28,38,56},large;
    large=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]>=large)
        {
            large=a[i];
        }
    }
    printf("the largest value is %d",large);
    getch();
}
