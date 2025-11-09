/*Huitrón Was-Szabo Elizabeth Desireé
Problemas Simples Ejercicio 3*/
#include<stdio.h>
void main()
{
  float dollar, peso;
  printf("¿Cuantos dolares quieres convertir en peso? \n");
  scanf("%f", &dollar);
  peso= dollar * 11.96;
  printf("Tienes %.2f pesos", peso);
}
