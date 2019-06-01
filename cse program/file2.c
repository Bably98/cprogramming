#include<stdio.h>
int main()
{
    int i,n,sum=0,p;

    FILE *fp;
    fp=fopen("d:\\int.txt","r");
    while(1)
    {
        fscanf(fp,"%d\n",&p);
        sum=sum+p;
        if(feof(fp))
            break;

    }
    printf("%d",sum);
    fclose(fp);
    return 0;
}
