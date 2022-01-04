//Funciones para calcular areas// //Adolfo//

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

//funciones para volumenes// //Mario//

//funciones para calcular distancias// //Eduardo//

float distanciaCuadrado(float l)
{
	return (l * 4);
}
float distanciaRectangulo(float b, float h)
{
	return ((b + b) + (h + h));
}
float distanciaTriangulo(float ladoTriangulo, float baseTriangulo, float alturaTringulo)
{
	return (ladoTriangulo + baseTriangulo + alturaTringulo);
}
float distanciaCirculo(float pi, float radio)
{
	pi = 3.1416;
	return (2 * pi * radio);
}