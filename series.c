#include<stdio.h>
int factorial_rec(int numero)
{
    int res = 0;
    
    if(numero == 0)
    {
        return 1;
    }
    
    else
    {
        res = factorial_rec(numero-1);
        return numero*res;
    }
}

int factorial(int n) //Proceso para tener números factoriales
{
  int i;    //Contador
  int f = 1;    //resultado de factorial
  
  for(i=1;i<=n;i++)
    {
      f = f * i;
    }
  
  return f;
}

/**
 *   Que hace: En main se llama a esta funcion por cada escalon en el triangulo de fibonacci, la entrada definira hasta que paso llegara en la piramide, ademas que guarda el resultado en la direccion de memoria de el resultado final
 *   @Ejemplo: 
 *   fibonacci(int 6, &num_fibonacci)
 *
 *   0 1 1 2 3 5 8 
 *   
 *   *num_fibonacci = 8;
 */

void fibonacci(int pasos, int *num_fibonacci)
{
  int i;
  int suma = 0; //Resultado de suma
  int punto1 = 0; //Numero 1 a sumar
  int punto2 = 0;//Numero 2 a sumar
  
  for(i = 0; i<=pasos; i++)
    {
      suma = punto1 + punto2; //p1 y p2 se suman para dar 
      
      printf("%d ", suma);

      if(suma == 0)
	{
	  punto1 = 1;
	}
      else
	{
	  punto1 = punto2;
	  punto2 = suma;
	}
    }
  printf("\n");
  *num_fibonacci = suma;
}
