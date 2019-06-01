#include<stdio.h>
int main()
{
    int rice,fish,meat,pay=1000,tb,cb;
    printf("price of rice=");
    scanf("%d",&rice);
    printf("price of fish=");
    scanf("%d",&fish);
    printf("price of meat=");
    scanf("%d",&meat);
    tb=rice+fish+meat;
    cb=pay-tb;
    if(pay<tb)
        printf("Ohh!I'm sorry,I donnot have sufficient money");
    else printf("cash back=%d",cb);
    return 0;
}
