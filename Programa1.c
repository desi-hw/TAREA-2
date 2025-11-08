/*Huitrón Was-Szabo Elizabeth Desireé
Problemas Simples Ejercicio 1*/
#include<stdio.h>
void main()
{
  int num1, num2, suma, resta, mul;
  printf("Dame 2 numeros separados por comas: ");
  scanf("%d,%d", &num1, &num2);
  suma=num1+num2;
  resta=num1-num2;
  mul=num1*num2;
  printf("El resultado de la suma es: %d \n", suma);
  printf("El resultado de la resta es: %d \n", resta);
  printf("El resultado de la multiplicación es: %d \n", mul);
}
