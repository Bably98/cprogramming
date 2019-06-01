#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("Enter two number:");
    scanf("%d %d",&num1,&num2);

    result=num1+num2;
    printf("sum=%d\n",result);

    result=num1-num2;
    printf("sub=%d\n",result);

    result=num1*num2;
    printf("mult=%d\n",result);

    result=num1/num2;
    printf("div=%d\n",result);

    result=num1%num2;
    printf("mod=%d\n",result);

    return 0;
}
