#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//volumen del cuadrado

main()
{
	float pi=3.1416;
	float r;
	float h;
	float v;
	
	printf("dame el valor del radio/n");
	scanf("%f", &r);
	
	printf("dame el valor de la altura/n");
	scanf("%f", &h);
	
	//calculo del volumen
	v=pi*pow(r,2)*h;
	
	printf("el volumen del cuadrado es: %.3f", v); 
}
