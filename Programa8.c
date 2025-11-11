/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Condiciones SI Ejercicio 8*/
#include<stdio.h>
void main()
{
  int num1, num2;
  printf("Dame dos numeros separados por coma: ");
  scanf("%d,%d", &num1, &num2);
  if(num1 % num2 == 0)
    printf("%d es divisor de %d", num1, num2);
  else
    printf("%d es no divisor de %d", num1, num2);
}
