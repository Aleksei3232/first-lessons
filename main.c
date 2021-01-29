#include <stdio.h>

int fibonacci(int);

int sum_int(int a, int b);

long sum_long(long a, long b);

float sum_float(float a, float b);


int main (void)
{
  printf ("Hello, World!\n");


  int my_sum = sum_int(3, 123);
  printf ("Sum: %d\n", my_sum);

  long my_sum2 = sum_long(123, 4567);
  printf ("Sum: %ld\n", my_sum2);

  float my_sum3 = sum_float(2.2, 2.3);
  printf ("Sum: %f\n", my_sum3);
  
  int my_fib = fibonacci(10);
  printf ("Fibonacchi: %d\n", my_fib);


  //getchar ();
  return 0;
}

int sum_int(int a, int b)
{
    return a + b;
}

long sum_long(long a, long b)
{
    return a + b;
}

float sum_float(float a, float b)
{
    return a + b;
}

int fibonacci(int arg)
{
    if (arg == 1) {
        int abc = 123;
        return 0;
    }
    else if (arg == 2)
        return 1;
    else
        return fibonacci(arg - 1) + fibonacci(arg - 2);
}
