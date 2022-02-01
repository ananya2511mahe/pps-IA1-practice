#include<stdio.h>
int input()
{
  int a;
  printf("enter a numbers/n");
  scanf("%d",&a);
  return a;
}
int add (int a, int b)
{
  int c;
  c=a+b;
  return c;
}
void output(int a, int b, int c)
{
  printf("%d+ %d is %d\n",a,b,c);
}
int main()
{
  int a=input ();
  int b=input();
  int c=add(a,b);
  output(a,b,c);
  return 0;
}