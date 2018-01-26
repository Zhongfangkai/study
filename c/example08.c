#include <stdio.h>

/*递归函数*/
int factorial(unsigned int i)
{
    if(i <= 1)    {
        return 1;
    }
    return i * factorial(i - 1);
}

/*斐波那契数列*/
int fibonaci(int i)
{
   if(i == 0)
   {
      return 0;
   }
   if(i == 1)
   {
      return 1;
   }
   return fibonaci(i-1) + fibonaci(i-2);
}

int  main() {
    int i = 15;
    printf("Factorial of %d is %d\n", i, factorial(i));
    int j;
    for (j = 0; j < 10; j++)
    {
        printf("%d\t%n", fibonaci(i));
    }
    return 0;
}