/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Estructuras Repetitivas (FOR, WHILE) Ejercicio 9*/
#include<stdio.h>
int main()
{
  int num1, num2, i=1, mul;
  printf("¿Cual es el numero que quieres multiplicar? \n");
  scanf("%d", &num1);
  printf("¿Cuantas veces quieres multiplicarlo? \n");
  scanf("%d", &num2);
  while(i<=num2)
  {
    mul = i * num1;
    printf("%dx%d=%d \n", i, num1, mul);
    i++;
  }
  return 0;
}
