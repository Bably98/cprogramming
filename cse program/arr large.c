#include<stdio.h>
int main()
{
    int a[50],i,largest,smallest;
    printf("while finish enter x");
    for(i=0;i=!'x';i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=1;i=!'x';i++)
    {
        if(largest<a[i])
        {largest=a[i];}
    }
    printf("largest number=%d\n",largest);
     smallest=a[0];
    for(i=1;i=!'x';i++)
    {
        if(smallest>a[i]){
        smallest=a[i];
        }
    }
    printf("smallest number=%d\n",smallest);
    return 0;
}
