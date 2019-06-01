#include<stdio.h>
int main()
{
    char s1[50];
    int i,n;
    gets(s1);
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]>='A'&&s1[i]<'a')
        {
           n=s1[i]+32;
           printf("%c",n);
        }
        else if(s1[i]>='a'&&s1[i]<='z')
        {
            n=s1[i]-32;
            printf("%c",n);
        }
    }

    return 0;
}
