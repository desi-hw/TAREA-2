/*Huitrón Was-Szabo Elizabeth Desireé
Problemas Simples Ejercicio 4*/
#include<stdio.h>
void main()
{
  float dinero, interes;
  printf("¿Cuanto es el dinero que vas a invertir? \n");
  scanf("%f", &dinero);
  interes = dinero + (dinero * 0.15);
  printf("La cantidad total es: %.2f", interes);
}
