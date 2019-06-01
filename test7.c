#include<stdio.h>
int main()
{
    float c,F;

    printf("Enter centigrade:");
    scanf("%f",&c);

    F=(c*1.8)+32;
    printf("farenheit=%f\n",F);

    return 0;
}
