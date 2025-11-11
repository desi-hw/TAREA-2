/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Estructuras Repetitivas (FOR, WHILE) Ejercicio 10*/
#include<stdio.h>
int main()
{
  int i, suma=0;
  for(i=10; i<=50; i++)
  {
    if(i % 2 == 0)
      suma = suma + i;
  }
  printf("%d ", suma);
  return 0;
}
