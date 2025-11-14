/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Arreglos Ejercicio 15*/
#include<stdio.h>
int main()
{
  int num, i;
  printf("¿Cuantos numeros quieres meter? \n");
  scanf("%d", &num);
  int arreglo[num];
  for(i=0; i<num; i++)
  {
    
    if(arreglo[i]>0)
      printf("El numero es postivo \");
    else
    {
      if(arreglo[i]<0)
        printf("El numero es negativo \");
      else
        printf("El numero es nulo \"); 
    }
    i++;
  }
  return 0;
}
