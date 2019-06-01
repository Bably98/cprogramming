#include<stdio.h>
int main()
{
    int basic,rent;
    printf("enter the basic=");
    scanf("%d",&basic);
    if(basic>=0&&basic<=3000)
    {
        if(rent=basic*0.6<1200)
        printf("rent=1200");
        else
        {
            rent=basic*0.6;
            printf("rent=%d",rent);}
    }
    if(basic>=3001&&basic<=6000)
    {
        if(rent=basic*0.5<2250)
           printf("rent=2250");
        else
        {
           rent=basic*0.5;
           printf("rent=%d",rent);
        }
    }
    if(basic>6000)
    {
        if(rent=basic*0.4<3250)
           printf("rent=3250");
        else
        {
            rent=basic*0.4;
            printf("rent=%d",rent);
        }
    }
    return 0;
}
