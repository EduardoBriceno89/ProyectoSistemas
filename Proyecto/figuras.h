//Funciones para calcular areas// 

float areaCuadrado(float l)
{
	return (l * l);
}
float areaRectangulo(float b, float h)
{
	return (b * h);
}
float areaTriangulo(float baseTriangulo, float alturaTringulo)
{
	return ((baseTriangulo * alturaTringulo) / 2);
}
float areaCirculo(float pi, float radio)
{
	pi = 3.1416;
	return (pi * pow(radio, 2));
}

//funciones para volumenes//

float volumenCubo(float lCubo)
{
	return (pow(lCubo, 3));
}
float volumenCilindro(float aBase, float hCilindro)
{
	return (aBase * hCilindro);
}
float volumenEsfera(float rEsfera)
{
	float pi = 3.1416;
	return (4 / 3 * (pi * pow(rEsfera, 3)));
}
float volumenPrisma(float lPrisma, float wPrisma, float hPrisma)
{
	return (lPrisma * wPrisma * hPrisma);
}

//funciones para calcular distancias//

float distanciaCuadrado(float l)
{
	return (l * 4);
}
float distanciaRectangulo(float b, float h)
{
	return ((b + b) + (h + h));
}
float distanciaTriangulo(float lTriangulo, float baseTriangulo, float alturaTringulo)
{
	return (lTriangulo + baseTriangulo + alturaTringulo);
}
float distanciaCirculo(float pi, float radio)
{
	pi = 3.1416;
	return (2 * pi * radio);
}
