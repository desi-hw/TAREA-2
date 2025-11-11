/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Estructuras Repetitivas (FOR, WHILE) Ejercicio 12*/
#include<stdio.h>
int main()
{
  int i, num, mul;
  printf("¿Que numero deseas multiplicar? \n");
  scanf("%d", &num);
  for(i=0; i<=9; i++)
  {
    mul = i * num;
    printf("%dx%d = %d \n", i, num, mul);
  }
  return 0;
}
