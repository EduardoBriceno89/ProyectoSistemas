#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "figuras.h"

int main()
{

	//empezamos aqui//

	int opcion, opcionAreas;
	float l, b, h, volumen, pi, radio, baseTriangulo, alturaTriangulo, ladoTriangulo, per;

	do
	{
		printf("*********MENU**********\n");
		printf("que calculo desea realizar?\n");
		printf("1- Areas\n");
		printf("2- Salir\n");
		printf("Introduce una opcion: \n");
		scanf("%d", &opcion);

		switch (opcion)
		{

		case 1:
			system("cls");
			printf("******SELECCIONE FIGURA*******\n");
			printf("1- Cuadrado\n");
			printf("2- Rectangulo\n");
			printf("3- Triangulo\n");
			printf("4- Circulo\n");
			scanf("%d", &opcionAreas);

			switch (opcionAreas)
			{
			case 1:
				printf("Ingrese lado...\n");
				scanf("%f", &l);

				printf("El area del Cuadrado es: %.2f cm^2\n", areaCuadrado(l)); //area
				printf("El perimetro del Cuadrado es: %.2f cm\n", distanciaCuadrado(l));
				break;
			case 2:
				printf("Ingrese base...\n");
				scanf("%f", &b);
				printf("Ingrese altura...\n");
				scanf("%f", &h);

				printf("El area del Rectangulo es: %.2f cm^2\n", areaRectangulo(b, h));
				printf("El perimetro del Rectangulo es: %.2f cm\n", distanciaRectangulo(b, h));
				break;
			case 3:
				printf("Ingrese base...\n");
				scanf("%f", &baseTriangulo);
				printf("Ingrese altura...\n");
				scanf("%f", &alturaTriangulo);
				printf("Ingrese lado de triangulo...\n");
				scanf("%f", &ladoTriangulo);

				printf("El area del Triangulo es: %.2f cm^2\n", areaTriangulo(baseTriangulo, alturaTriangulo));
				printf("El perimetro del Triangulo es: %.2f cm\n", distanciaTriangulo(baseTriangulo, alturaTriangulo, ladoTriangulo));
				break;
			case 4:
				printf("Ingrese radio...\n");
				scanf("%f", &radio);

				printf("El area del Circulo es: %2.f cm^2\n", areaCirculo(pi, radio));
				printf("El perimetro del Circulo es: %.2f cm\n", distanciaCirculo(pi, radio));
				break;

			default:
				printf("Ingrese una opcion correcta...");
				break;
			}

			break;
		case 2:
			printf("Saliste del programa...\n");
			break;
		default:
			printf("ingrese una opcion correcta...\n");
		}

	} while (opcion != 2);

	system("pause");
	return 0;
}
