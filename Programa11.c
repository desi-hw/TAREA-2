/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Estructuras Repetitivas (FOR, WHILE) Ejercicio 11*/
#include<stdio.h>
int main()
{
  int i, suma=0;
  for(i=10; i<=50; i++)
  {
    if(i % 2 == 0)
      suma = suma + i;
  }
  printf("La suma de los numeros pares entre el 10 y el 50 es: %d ", suma);
  return 0;
}
