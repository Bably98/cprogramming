#include<stdio.h>
#include<string.h>
int main()
{
    char s1[89],s2[80];
    int i,j,n;
    printf("enter a name=");
    scanf("%s",s1);
    n=strlen(s1);
    j=0;
    for(i=n-1;i>=0;i--)
    {
        s2[j]=s1[i];
        j++;
    }
    s2[j]=NULL;
    printf("%s",s2);
    return 0;
}
