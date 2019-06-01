#include<stdio.h>
int main()
{
    int tp,son,daughter,wife,sgw,sgd,tsp,tdp;
    printf("enter total property=");
    scanf("%d",&tp);
    wife=tp*0.2;
    printf("wife's property=%d\n",wife);
    daughter=tp*0.1;
    printf("each daughter's property=%d\n",daughter);
    son=tp*0.25;
    printf("each son's property=%d\n",son);
    sgw=son-wife;
    printf("son will get %d more property than wife\n",sgw);
    sgd=son-daughter;
    printf("son will get %d more property than daughter\n",sgd);
    tsp=2*son;
    printf("total son's property=%d\n",tsp);
    tdp=3*daughter;
    printf("total daughter's property=%d\n",tdp);
    return 0;
}
