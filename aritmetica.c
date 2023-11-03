#include<stdio.h>

int suma(int a, int b)
{
    return a+b;
}

int resta(int a, int b)
{
    return a-b;
}

int multiplicacion(int a, int b)
{
    return a*b;
}

double division(int a, int b)
{
    int a_d = 0;
    int b_d = 0;
    
    a_d = (double) a;
    b_d = (double) b;
    
    return a_d/b_d;
}
