/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Condiciones SI Ejercicio 6*/
#include<stdio.h>
void main()
{
  int paga, aumento;
  printf("¿Cual es tu sueldo actual? \n");
  scanf("%d", &paga);
  if(paga<1000)
  {
    aumento = paga + (paga * 0.15);
    printf("Ahora tu sueldo es: %d", aumento);
  }
  else
  {
    aumento = paga + (paga * 0.12);
    printf("Ahora tu sueldo es: %d", aumento);
  }
}
