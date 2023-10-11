#include<stdio.h>

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
      
      case '!':
      {
        printf("\n\n\tFactorial");
	    
	    printf("\n\nIngrese su número:   ");
	    scanf("%d", &a);

	    
	    res = factorial_rec(a);
	    
	    printf("\n\nEl factorial de %d es    %d", a, res);
	    break; 
      }
      
      case 'a':
      {
        leer(numeros_caso_a);
        printf("\n\n");
        res = sumar_arreglo(numeros_caso_a);
        
        printf("Tu respuesta:   %d", res);
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


//CAST CONVERTIR DE un tipo de variable a otro
//a_d = (double)a


