/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Arreglos Ejercicio 14*/
#include<stdio.h>
int main()
{
  int num, i, numrepite, cont=0;
  printf("¿Cuantos numeros quieres agregar? \n");
  scanf("%d", &num);
  int arreglo[num];
  for(i=0; i<num; i++)
  {
    printf("Ingrese un numero: ");
    scanf("%d", &arreglo[i]);
  }
   printf("¿Cual es el numero que quieres saber cuantas veces se repite? \n");
   scanf("%d", &numrepite);
   for(i=0; i<num; i++)
   {
     if(arreglo[i] == numrepite)
       cont++;
   }
  printf("El numero se repite %d", cont);
  return 0;
}
