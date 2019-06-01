#include<stdio.h>
int main()
{
    char upper,lower;
    printf("Enter any uppercase letter:");
    scanf("%C",&upper);

    lower=tolower(upper);
    printf("The lowercase letter:%c",lower);

    return 0;
}
