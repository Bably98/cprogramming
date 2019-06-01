//write a program that calculate a area of a triangle.
#include<stdio.h>
int main()
{
    float base,height,Area;
    printf("Base=");
    scanf("%f",&base);

    printf("Height=");
    scanf("%f",&height);

    Area=(float)1/2*base*height;//type casting
    printf("rea=%f\n",Area);
    return 0;
}
