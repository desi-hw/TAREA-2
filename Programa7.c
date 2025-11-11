/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Condiciones SI Ejercicio 7*/
#include<stdio.h>
void main()
{
  float recorrido1, estancia, recorrido2, descuento1, precio;
  printf("¿Cuantos kilometros recorres de ida? \n");
  scanf("%f", &recorrido1);
  recorrido2 = 2 * recorrido1;
  printf("¿Cuantos dias te quedaras? \n");
  scanf("%f", &estancia);
  if(recorrido2 > 800 && estancia > 7)
  {
    descuento1 = recorrido2 - (recorrido2 * 0.30);
    precio = descuento1 * 0.23;
    printf("El precio del boleto es: %.2f", precio);
  }
  else
  {
    precio = recorrido2 * 0.23;
    printf("El precio del boleto es: %.2f", recorrido2);
  }
}
