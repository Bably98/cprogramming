#include<stdio.h>
int main()
{
    int m;
    printf("enter the mark=");
    scanf("%d",&m);
    if(m>=0&&m<=32)
        printf("grade F");
    if(m>=33&&m<=39)
        printf("grade D");
    if(m>=40&&m<=49)
        printf("grade C");
    if(m>=50&&m<=59)
        printf("grade B");
    if(m>=60&&m<=69)
        printf("grade A-");
    if(m>=70&&m<=79)
        printf("grade A");
    if(m>=80&&m<=100)
        printf("grade A+");
    return 0;
}
