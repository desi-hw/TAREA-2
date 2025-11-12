/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Arreglos Ejercicio 13*/
#include<stdio.h>
int main()
{
  int num2, i=0, suma=0;
  printf("¿Cuantos numeros quieres sumar? \n");
  scanf("%d", &num2);
  int num[num2]
  while(i<num2)
  {
    printf("Ingrese un numero: ");
    scanf("%d", &num[i]);
    suma = suma + num[i];
    i++;
  }
  printf("El resultado de la suma es: %d", suma);
  return 0;
}
