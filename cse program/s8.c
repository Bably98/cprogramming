#include<stdio.h>
int main()
{
    int basic,ins=30,med=700,mob=300,club=20,loan=100,income;
    float rent,pf,ta,tc;
    printf("enter the basic=");
    scanf("%d",&basic);
    rent=basic*0.4;
    ta=basic+rent+med+mob;
    pf=basic*0.1;
    tc=pf+ins+club+loan;
    income=ta-tc;
    printf("total income=%d",income);
    return 0;
}
