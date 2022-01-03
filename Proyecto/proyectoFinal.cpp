#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    float area, l1, l2, radio, h, base;

    printf("        MENU    \n");
    printf(" 1- Cuadrado\n");
    printf(" 2- Rectangulo\n");
    printf(" 3- Triangulo\n");
    printf(" 4- Ciruclo\n");
    printf("Introduce una opcion: ");
    scanf("%d", &opcion);

       switch(opcion)
       {
           case 1:
           {
               printf("Introduce el lado: ");
               scanf("%f", &l1);

               area=l1*l1;
               printf("El area es de: %f", area);

               break;
           }

           case 2:
           {
               printf("Introduce el lado 1: ");
               scanf("%f", &l1);

               printf("Introduce el lado 2: ");
               scanf("%f", &l2);

               area=l1*l2;
               printf("El area es de: %f", area);

               break;
           }

           case 3:
           {
               printf("Introduce la base: ");
               scanf("%f", &base);

               printf("Introduce la altura: ");
               scanf("%f", &h);

               area=(base*h)/2;
               printf("El area es de: %f", area);

               break;
           }

           case 4:
           {
               printf("Introduce el radio: ");
               scanf("%f", &radio);

               area=(radio*radio)*3.14;
               printf("El area es de: %f", area);

               break;
           }

           default:
               printf("La opcion no es correcta");
       }
   }
