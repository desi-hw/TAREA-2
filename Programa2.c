/*Huitrón Was-Szabo Elizabeth Desireé
Problemas Simples Ejercicio 2*/
#include<stdio.h>
void main()
{
  float radio, area, circunferencia, pi;
  pi=3.1416;
  printf("¿Cual es el valor del radio? \n");
  scanf("%f", &radio);
  area = pi * (radio*radio);
  circunferencia = 2 * pi * radio;
  printf("El valor del area es: %.2f \n", area);
  printf("El valor de la circunferencia es: %.2f", circunferencia);
}
