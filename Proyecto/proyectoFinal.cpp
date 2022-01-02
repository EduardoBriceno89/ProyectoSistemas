#include <stdio.h>
#include <stdlib.h>
#include "areas.h" //libreria para areas

int main(){
	
	//empezamos aqui//
	int l, L;
	
	printf("ingrese lado uno\n");
	scanf("%d",&l);
	printf("ingrese lado dos\n");
	scanf("%d",&L);
	
	printf("El area del cuadrado es: %d",areaCuadrado(l,L));
	
	return 0;
	
	system("pause");
}
