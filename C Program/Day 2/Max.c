#include<stdio.h>

int main()
{
  int num;
  int max;

  scanf("%d", &num);
  max = num;

  for(int i = 1; i<=9; i++)
  {
    scanf("%d", &num);

    if (num > max)
      max = num;
  }

  printf("The maximum element is %d",max);

  return 0;

}
