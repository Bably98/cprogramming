#include<stdio.h>
int main()
{
    float length,width,area;

    printf("Enter length:");
    scanf("%f",&length);

    printf("Enter weidth:");
    scanf("%f",&width);

    area=length*width;
    printf("area=%f",area);

    return 0;
}
