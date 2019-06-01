#include<stdio.h>
int main()
{
    char s1[60],s2[60];
    int i,j;
    gets(s1);
    gets(s2);
    for(i=0;s1[i]!=NULL;i++)
    {

    }
   for(j=0;s2[j]!=NULL;j++)
   {
       s1[i]=s2[j];
       i++;
   }
    s1[i]=NULL;
    printf("%s",s1);
    return 0;
}
