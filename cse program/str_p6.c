#include<stdio.h>
int main()
{
    char s1[70];
    int i=0,l=0;
    printf("enter a sentence=");
    gets(s1);
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]=='.')
           l++;




    }
    printf("no of lines=%d",l);
    return 0;
}
