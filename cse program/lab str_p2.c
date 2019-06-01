#include<stdio.h>
int main()
{
    char s1[80];
    int i,n;
    gets(s1);
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]=='Z')
            {printf("%c",'A');}
        else if(s1[i]=='z')
            {printf("%c",'a');}
        else if(s1[i]=='9'){
            printf("%c",'0');}
        else
            printf("%c",s1[i]+1);
    }
    return 0;
}
