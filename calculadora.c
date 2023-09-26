#include<stdio.h>

/*

  Mario Ureña García
  
  Descripción e intención del programa:
  
  Entradas:
  
  Salidas:

*/

//Declarar funciones --------------------------------------------------------------



//Main ----------------------------------------------------------------------------

int main (void)
{
  printf("\n\n\tEste código fue creado por Mario Ureña García\n\n");

//Variables
  char c;

//Procesos

  printf("\n\n¿Que tipo de operación quieres hacer?     ");
  scanf("%c", &c);

  switch(c)
    {
      
    case '+':
      {
	printf("\n\nSuma");
	break;
      }

      case '-':
      {
	printf("\n\nResta");
	break;
      }

      case '/':
      {
	printf("\n\nDivisión");
	break;
      }

      case '*':
      {
	printf("\n\nMultpiplicación");
	break;
      }
      
    }


//FIN DEL PROGRAMA
  
  printf("\n\n\tPrograma Finalizado con ÉXTO\n\n");
  return 0;
}

//Funciones -----------------------------------------------------------------------
