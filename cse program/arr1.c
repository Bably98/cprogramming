#include<stdio.h>
#include<math.h>
int main()
{
    int bin[100],deci=0,n,i,k;
    printf("number=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&bin[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("%d\n",bin[i]);
    }
    for(i=0;i<n;i++)
    {
        deci=deci+bin[i]*pow(2,i-1);
        printf("decimal=%d",deci);
    }

    return 0;
}
