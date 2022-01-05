#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "figuras.h"

int main()
{

	int opcion, opcionAreas, opcionVolumen, opcionDistancia;					   //variables para switch//
	float l, b, h, volumen, pi, radio, baseTriangulo, alturaTriangulo, lTriangulo; //variables para areas//
	float lCubo, aBase, hCilindro, rEsfera, lPrisma, wPrisma, hPrisma;			   //variables para volumenes//

	do
	{
		printf("*********MENU**********\n");
		printf("que calculo desea realizar?\n");
		printf("1- Areas\n");
		printf("2- Volumenes\n");
		printf("3- Distancias\n");
		printf("4- Salir\n");
		printf("Introduce una opcion: \n");
		scanf("%d", &opcion);

		switch (opcion)
		{
		case 1: //case para areas//
		{
			system("CLS");

			printf("******ESCOJA LA FIGURA*******\n");
			printf("1-Cuadrado\n");
			printf("2-Rectangulo\n");
			printf("3-Triangulo\n");
			printf("4-Circulo\n");
			scanf("%d", &opcionAreas); //opcion para elegir la figura//

			switch (opcionAreas)
			{ //switch para hacer calculo de figura previamente seleccionada//
			case 1:
				printf("ingrese lado...\n");
				scanf("%f", &l);

				printf("El area del cuadrado es: %.2f\n", areaCuadrado(l));
				break;
			case 2:
				printf("Ingrese base...\n");
				scanf("%f", &b);
				printf("Ingrese altura...\n");
				scanf("%f", &h);

				printf("El area del rectangulo es: %.2f\n", areaRectangulo(b, h));
				break;
			case 3:
				printf("Ingrese base...\n");
				scanf("%f", &baseTriangulo);
				printf("Ingrese altura...\n");
				scanf("%f", &alturaTriangulo);

				printf("El area del circulo es: %.2f\n", areaTriangulo(baseTriangulo, alturaTriangulo));

				break;
			case 4:
				printf("Ingrese valor de radio...\n");
				scanf("%f", &radio);

				printf("El area del circulo es: %.2f\n", areaCirculo(pi, radio));

				break;
			default:
				printf("La opcion no es correcta\n");
				break;
			}
			break;
		}
		case 2:
		{ //volumenes
			system("CLS");

			printf("******ESCOJA LA FIGURA*******\n");
			printf("1-Cubo\n");
			printf("2-Cilindro\n");
			printf("3-Esfera\n");
			printf("4-Prisma Rectangular recto\n");
			scanf("%d", &opcionVolumen);
			switch (opcionVolumen)
			{
			case 1:
				printf("Ingrese lado...\n");
				scanf("%f", &lCubo);

				printf("El volumen del Cubo es: %.2f dm^3\n", volumenCubo(lCubo));
				break;
			case 2:
				printf("Ingrese area de la base...\n");
				scanf("%f", &aBase);
				printf("Ingrese altura...\n");
				scanf("%f", &hCilindro);

				printf("El volumen del Cilindro: %.2f dm^3\n", volumenCilindro(aBase, hCilindro));
				break;
			case 3:
				printf("Ingrese radio...\n");
				scanf("%f", &rEsfera);

				printf("El volumen de la Esfera es: %.2f dm^3\n", volumenEsfera(rEsfera));
				break;
			case 4:
				printf("Ingrese longitud...\n");
				scanf("%f", &lPrisma);
				printf("Ingrese ancho...\n");
				scanf("%f", &wPrisma);
				printf("Ingrese altura...\n");
				scanf("%f", &hPrisma);

				printf("El volumen del Prisma Rectangular recto es de: %.2f dm^3\n", volumenPrisma(lPrisma, wPrisma, hPrisma));
				break;

			default:
				printf("La opcion no es correcta\n");
				break;
			}
			break;
		}
		case 3:
		{ //distancias
			system("CLS");

			printf("******ESCOJA LA FIGURA*******\n");
			printf("1-Cuadrado\n");
			printf("2-Rectangulo\n");
			printf("3-Triangulo\n");
			printf("4-Circulo\n");
			scanf("%d", &opcionDistancia);

			switch (opcionDistancia)
			{
			case 1:
				printf("Ingrese lado del Cuadrado...\n");
				scanf("%f", &l);

				printf("El perimetro del Cuadrado es de: %.2f cm\n", distanciaCuadrado(l));
				break;
			case 2:
				printf("Ingrese base...\n");
				scanf("%f", &b);
				printf("Ingrese altura...\n");
				scanf("%f", &h);

				printf("El perimetro del Rectangulo es de: %.2f cm\n", distanciaRectangulo(b, h));
				break;
			case 3:
				printf("Ingrese lado de trinagulo...\n");
				scanf("%f", &lTriangulo);
				printf("Ingrese base...\n");
				scanf("%f", &baseTriangulo);
				printf("Ingrese altura...\n");
				scanf("%f", &alturaTriangulo);

				printf("El perimetro del Triangulo es de: %.2f cm\n", distanciaTriangulo(lTriangulo, baseTriangulo, alturaTriangulo));
				break;
			case 4:
				printf("Ingrese radio...\n");
				scanf("%f", &radio);

				printf("El perimetro del Circulo es de: %.2f cm\n\n\n", distanciaCirculo(pi, radio));

			default:
				printf("La opcion no es correcta\n");
				break;
			}

			break;
		}
		case 4:
			printf("Saliste del programa...");
			break;

		default:
			printf("La opcion no es correcta\n");
		}
	} while (opcion != 4);

	return 0;
}
