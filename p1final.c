#include <stdio.h>

void input (int *a,int*b)
{
  printf("Enter the value of a /n");
  scanf ("%d",a);
  printf("Enter the value of b /n");
  scanf ("%d",b);
}

void add(int a, int b, int *sum)
{
 *sum=a+b;
}

void output(int a, int b, int sum)
{
  printf("The sum of %d and %d is %d",a,b,sum);
}

int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}


  