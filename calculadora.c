#include<stdio.h>
#include<math.h>

/*

  Mario Ureña García
  
  Descripción e intención del programa:
  
  Entradas:
  
  Salidas:

*/

//Declarar funciones --------------------------------------------------------------


void leer(int num[]);
int sumar_arreglo(int num[]);

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
double division(int a, int b);

int factorial_rec(int numero);
int factorial(int n);

double euler (int n);
double euler_divisiones(int f);

void eq_cuadr(double a, double b, double c, double *r1, double *r2);

int introducir_numero();
int introducir_numero_impar();

void fibonacci(int pasos, int *num_fibonacci);

double pi (int n);

void circulo_esfera(double r, double *peri, double *area, double *vol);

//Main ----------------------------------------------------------------------------

int main (void)
{
  printf("\n\n\tEste código fue creado por Mario Ureña García\n\n");

//Variables
  char c;
  int numeros_caso_a[10];
  int res = 0;
  float res_float = 0;
  int a = 0;
  int b = 0;
  double v1,v2,v3,res1,res2, res3;
  int i;
//Procesos

  printf("\n\n¿Que tipo de operación quieres hacer?     ");
  scanf("%c", &c);

  switch(c)
    {
      
    case '+':
      {
	    printf("\n\n\tSuma");
	    
	    printf("\n\nIngrese su primer número:   ");
	    scanf("%d", &a);
	    printf("\nIngrese su segundo número:   ");
	    scanf("%d", &b);
	    
	    res = suma(a,b);
	    
	    printf("\n\nEl resultado de tu suma es %d", res);
	    break;
      }

      case '-':
      {
	    printf("\n\n\tResta");
	    
	    printf("\n\nIngrese su primer número:   ");
	    scanf("%d", &a);
	    printf("\nIngrese su segundo número:   ");
	    scanf("%d", &b);
	    
	    res = resta(a,b);
	    
	    printf("\n\nEl resultado de tu resta es %d", res);
	    break;
      }

      case '/':
      {
	    printf("\n\n\tDivisión");
	    
	    printf("\n\nIngrese su primer número:   ");
	    scanf("%d", &a);
	    printf("\nIngrese su segundo número:   ");
	    scanf("%d", &b);
	    
	    res_float = division(a,b);
	    
	    printf("\n\nEl resultado de tu division es %.2f", res_float);
	    
	    break;
      }

      case '*':
      {
	    printf("\n\n\tMultpiplicación");
	    
	    printf("\n\nIngrese su primer número:   ");
	    scanf("%d", &a);
	    printf("\nIngrese su segundo número:   ");
	    scanf("%d", &b);
	    
	    res = multiplicacion(a,b);
	    
	    printf("\n\nEl resultado de tu multiplicacion es %d", res);
	    break;
      }
      
      case 'e':
      {
	    printf("\n\n\tEuler");
	    
	    printf("\n\nIngrese su número:   ");
	    scanf("%d", &a);

	    
	    res_float = euler(a);
	    
	    printf("\n\nEuler en base a tu numero es: %f", res_float);
	    break;
      }
      
      case 'F':
      {
        printf("\n\n\tFactorial");
	    
	    printf("\n\nIngrese su número:   ");
	    scanf("%d", &a);

	    if(a < 0)
	    {
	        printf("\n\nTu número no es válido\n\n");
	        return 0;
	    }
	    
	    res = factorial_rec(a);
	    
	    printf("\n\nEl factorial de %d es:    %d", a, res);
	    break; 
      }
      
      case 'f':
      {
        printf("\n\n\tFactorial");
	    
	    printf("\n\nIngrese su número:   ");
	    scanf("%d", &a);

	    if(a < 0)
	    {
	        printf("\n\nTu número no es válido\n\n");
	        return 0;
	    }
	    
	    res = factorial(a);
	    
	    printf("\n\nEl factorial de %d es:    %d", a, res);
	    break; 
      }
      
      case 'a':
      {
        leer(numeros_caso_a);
        printf("\n\n");
        res = sumar_arreglo(numeros_caso_a);
        
        printf("Tu respuesta:   %d", res);
        break;
      }   
      
      case 'c':
      {
        printf("\n\n\tChicharronera");
        
        printf("\n\nValor a:    ");
        scanf("%lf", &v1);
        
        printf("\nValor b:    ");
        scanf("%lf", &v2);
        
        printf("\nValor c:    ");
        scanf("%lf", &v3);
        
        eq_cuadr(v1,v2,v3,&res1,&res2);
        
        printf("\n\nx1=  %.2lf\nx2= %.2lf",res1, res2);
        printf("\n\n%p", &res1);
        break;
      }
      
      case 'i':
      {
      
        a = introducir_numero();

        for(i=0;i<=a;i++) //Bucle que define en que piso estamos del triangulo
          {
	        fibonacci(i, &res);
          }

        printf("\nEl número en f(%d) es %d", a, res);
        
        break;
      }
      
      case 'p':
      {
        printf("\n\n\tPi\n\n");
	    
	    a = introducir_numero_impar();

	    
	    res_float = pi(a);
	    
	    printf("\n\nPI en base a tu numero es: %f", res_float);
        break;
      }
      
      case 'v':
      {
        printf("\n\n\tEsfera\n\n");
        
        a = introducir_numero();
        circulo_esfera(a,&res1,&res2,&res3);
        
        printf("\n\nP = %f\nA = %f\nV = %f", res1,res2,res3);
        
        
        break;
      }
         
    }


//FIN DEL PROGRAMA
  
  printf("\n\n\tPrograma Finalizado con ÉXTO\n\n");
  return 0;
}

//Funciones -----------------------------------------------------------------------

void leer(int num[])
{
    int i;
    
    for (i = 0; i < 10 ; i++)
    {
        scanf("%i", &num[i]);
    }
}

int sumar_arreglo(int num[])
{
    int i;
    int res = 0;
    
    for(i = 0; i < 10; i++)
    {
        printf("%d   ", num[i]);
        res = res + num[i];
    }
    
    return res;
}

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

void eq_cuadr(double a, double b, double c, double *r1, double *r2)
{
    printf("\n\n%p", r1);
    *r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    *r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
}

/**
 *   Que hace: Es el inicio del programa en donde pregunta por un número, si el número es inválido, entonces la funcion se llama a si misma para pedir otro numero válido
 *   @return n
 *   @Ejemplo:
 *   num_usuario = introducir_numero();
 *   (usuario introduce 4)
 *   num_usuario = 4
 *
 */
int introducir_numero()
{
  int n; //Numero que introduce el usuario
  
  printf("Introduzca un número (0 o positivo):   ");
  scanf("%d", &n);
  printf("\n\n");

  if(n < 0)
    {
      printf("\tERROR: Introduzca un numero valido\n\n");
      introducir_numero();
    }
  else
    {
      return n;
    }
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

int introducir_numero_impar()
{
  int n; //Numero que introduce el usuario
  int comprobacion = 0;
  
  printf("Introduzca un número (impar positivo):   ");
  scanf("%d", &n);
  printf("\n\n");
  
  comprobacion = n % 2;
  
  if(comprobacion == 0 || n < 0)
    {
      printf("\tERROR: Introduzca un numero valido\n\n");
      introducir_numero_impar();
    }
  else
    {
      return n;
    }
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


void circulo_esfera(double r, double *peri, double *area, double *vol)
{   
    double p = 0; //Valores de pi
    int a = 0;  //Numero para pasos de pi

    
    a = introducir_numero_impar();
    p = pi(a);
    
    *peri = p * 2 * r;
    *area = p * (r*r);
    *vol = ((4) * (p) * (r*r*r)) / 3;
    printf("\n\n%f",p);
}
