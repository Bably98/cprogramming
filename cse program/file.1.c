#include<stdio.h>
int main()
{
    int i,m,n,p;
    FILE *fp;
    fp=fopen("d:\\in.txt","a");
    printf("how many inputs?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        fprintf(fp,"%d\n",m);
    }
    fclose(fp);
    fp=fopen("d:\\in.txt","r");
    while(1)
    {
        fscanf(fp,"%d\n",&p);
        if(feof(fp))
            break;
        printf("%d",p);
    }
    fclose(fp);
    return 0;
}
