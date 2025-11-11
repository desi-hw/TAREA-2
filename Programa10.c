/*Huitrón Was-Szabo Elizabeth Desireé
Problemas con Estructuras Repetitivas (FOR, WHILE) Ejercicio 10*/
#include<stdio.h>
int main()
{
  int i=1, num;
  while(i<=100)
  {
    printf("Dame un numero: ");
    scanf("%d", &num);
    if(num<0)
      printf("El numero es negativo \n");
    else
    {
      if(num>0)
        printf("El numero es positivo \n");
      else
        printf("El numero es nulo \n");
    }
    i++;
  }
  return 0;
}
