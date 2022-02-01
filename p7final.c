#include <stdio.h>
typedef struct complex
{
  float real;
  float imaginary;
}complex;

complex input()
{
  complex c;
  printf("enter real part: ");
  scanf("%f",&c.real);
  printf("enter imaginary part: ");
  scanf("%f",&c.imaginary);
  return c;
}

complex add(complex a,complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}

void out(complex a,complex b,complex sum)
{
  printf("sum of %0.1f+%0.1fi and %0.1f+%0.1fi is %0.1f+%0.1fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}

int main()
{
  complex c1,c2,sum;
  c1=input();
  c2=input();
  sum=add(c1,c2);
  out(c1,c2,sum);
  return 0;
}