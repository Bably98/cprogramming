#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;
    printf("Enter three number:");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum=num1+num2+num3;
    avg=(float)sum/3;
    printf("sum=%d\n",sum);
    printf("avg=%f\n",avg);

    return 0;
}
