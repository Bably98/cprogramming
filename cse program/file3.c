#include<stdio.h>
int main()
{
    int i,n;
    char p[70];
    FILE *fp;

    fp=fopen("d:\\int.txt","r");
    while(1)
    {
        fgets(p,70,fp);

        if(feof(fp))
            break;
            printf("%s",p);

    }
    fclose(fp);
    return 0;
}
