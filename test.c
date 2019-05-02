/*
 * Write a C function which accepts three int * arguments, assigns the mean of the three numbers to the first argument and zeros the others. 
 * The function prototype is: void mean(int *a, int *b, int *c); 
 * Write your own “test code” to verify the function’s operation.
*/

#include<stdio.h>
#include<math.h>

void mean (int *x, int *y, int *z);

int main()
{
    int a = 1, b = 2, c = 3;
    printf("%d %d %d\n", a, b, c);
    mean(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
}

void mean (int *x, int *y, int *z)
{
  *x = (int)round((*x + *y + *z)/3.0); //does calculation as double then round automatically
  *y = 0;
  *z = 0;
    
}