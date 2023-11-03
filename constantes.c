#include<stdio.h>
#include "alfamath.h"

//CAST CONVERTIR DE un tipo de variable a otro
//a_d = (double)a

double euler_divisiones(int f)
{
  double a;

  a = (double)f;
  return 1/a; //Division en el proceso de la formula de euler
}

double euler (int n)
{
  int i;        //Contador
  int f = 0;    //Número factorial arrojado por la funcion factorial()
  double e = 1; //Euler

  
  if (n<1)  //Si el numero es menor a 1 la funcion factoral no serviria, por lo tanto si mete uno dentro de este rango lo comvertira a 1
  {
    n = 1;
  }


  for(i=1;i<=n;i++) //loop hasta que i sea igual al número de usuario, osea el número de sumas en euler
  {

      f = factorial(i); 

      e = e + euler_divisiones(f); //se suma el resultado a la cadena de sumas de euler
  }
  
  return e;
}

double pi (int n)
{
  int i;        //Contador
  double p = 0; //Pi
  double divisor = 1;
  int suma_resta = 1;


  for(i=1;i<=n;i++) //loop hasta que i sea igual al número de usuario, osea el número de sumas/restas en pi
  {
      if (suma_resta == 1)
      {
        p = p + (1/divisor);
        suma_resta = 2;
      }
      
      else if (suma_resta == 2)
      {
        p = p - (1/divisor);
        suma_resta = 1;
      }
      
      divisor += 2;
  }
  
  return p*4;
}

