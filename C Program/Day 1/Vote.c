#include<stdio.h>

int main()
{
  unsigned int age;

  scanf("%d", &age);

  (age >= 18) ? printf("You can vote !!!") : printf("You cannot vote :(");

}
