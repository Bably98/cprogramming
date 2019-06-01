#include<stdio.h>
int main()

{ int mark,marks;
  printf("please enter your grade:");
  scanf("%d",&mark);
  marks=mark/10;
  switch(marks)
{
  case 10:
  case 9:
  case 8:
      printf("A+");
    break;
  case 7:
      printf("A");
    break;
  case 6:
    printf("A-");
    break;
  case 5:
      printf("B");
      break;
  case 4:
    printf("c");
    break;
  case 3:
    printf("pass");
    break;
    default:
    printf("fail the exam");
  }

    return 0;
}
