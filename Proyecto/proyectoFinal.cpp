	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	#include "areas.h"
	
	int main(){
	
	//empezamos aqui//
	
	int opcion,opcionAreas;
	float l1,b,h,volumen,pi,radio,baseTriangulo,alturaTriangulo;
	
	do{
	    printf("*********MENU**********\n");
	    printf("que calculo desea realizar?\n");
	    printf("1- Areas\n");
	    printf("2- Volumenes\n");
	    printf("3- Distancias\n");
	    printf("4- Salir\n");
	    printf("Introduce una opcion: \n");
	    scanf("%d", &opcion);
	
	   switch(opcion)
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
	
				switch(opcionAreas){ //switch para hacer calculo de figura previamente seleccionada//
					case 1:
						printf("ingrese lado...\n");
						scanf("%f", &l1);
						
						printf("El area del cuadrado es: %f",areaCuadrado(l1));
						break;
					case 2:
						printf("Ingrese base...\n");
						scanf("%f", &b);
						printf("Ingrese altura...\n");
						scanf("%f", &h);
						
						printf("El area del rectangulo es: %f",areaRectangulo(b,h));
						break;
	                case 3:
	                    printf("Ingrese base...\n");
	                    scanf("%f", &baseTriangulo);
	                    printf("Ingrese altura...\n");
	                    scanf("%f", &alturaTriangulo);
	
	                    printf("El area del circulo es: %f",areaTriangulo(baseTriangulo,alturaTriangulo));
	
	                    break;
	                case 4:
	                    printf("Ingrese valor de radio...\n");
	                    scanf("%f", &radio);
	
	                    printf("El area del circulo es: %f",areaCirculo(pi,radio));
	
	                    break;
	                default:
	                    printf("La opcion no es correcta");
				}
	        break;
	       }
	       case 2: {
	           //volumenes
	           //pega tu codigo aqui Mario
	           break;
	       }
	       case 3: {
	           //distancias
	           break;
	       }
	       case 4:
	            printf("Saliste del programa...");
	            break;
	
	       default:
	           printf("La opcion no es correcta");
	   }
	}while(opcion != 4);
	
	return 0;
	
}
