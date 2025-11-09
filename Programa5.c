/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Condiciones SI Ejercicio 5*/
#include<stdio.h>
void main()
{
  float precio, descuento;
  printf("¿Cuanto fue el total de su compra? \n");
  scanf("%f", &precio);
  if(precio>= 2500)
  {
    descuento = precio - (precio*0.08);
    printf("El precio final es: %.2f", descuento);
  }
  else
    printf("El total de su cuenta no tiene descuento");
}
