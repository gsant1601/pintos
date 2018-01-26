#ifndef __THREADS_FIXEDPOINT_H
#define __THREADS_FIXEDPOINT_H

/* Implements fixed point arithmetic*/
int f = 16384;

int integer_to_fixedpoint(int);
int fixedpoint_to_integer(int);
int fixedpoint_addition(int,int);
int fixedpoint_subtraction(int,int);
int fixedpoint_multiplication(int,int);
int fixedpoint_division(int,int);
int fixedpoint_multiplication_integer(int,int);
int fixedpoint_division_integer(int,int);
/*implementation*/
int integer_to_fixedpoint(int n)
{
  return n*f;
}
int fixedpoint_to_integer(int x)
{
  if (x>=0) return (x+f/2)/f;
  else if (x<=0) return (x-f/2)/f;
  else return f/2;
}
int fixedpoint_addition(int x,int y)
{
  return x+y;
}
int fixedpoint_subtraction(int x,int y)
{
  return x-y;
}
int fixedpoint_multiplication(int x,int y)
{
  return ((int64_t) x) * y / f;
}
int fixedpoint_division(int x,int y)
{
  return ((int64_t) x) * f / y;
}
int fixedpoint_addition_integer(int n,int x)
{
  return x+n*f;
}
int fixedpoint_subtraction_integer(int n,int x)
{
  return x-f*n;
}
int fixedpoint_multiplication_integer(int n,int x)
{
  return x*n;
}
int fixedpoint_division_integer(int n,int x)
{
  return x/n;
}



#endif /* fixedpoint.h */
