#include <stdio.h>
#include <math.h>

struct plano{
	int x1;
	int x2;
	int y1;
	int y2;
}
coordenada;

int main(){
	int d;
	int pediente;
	printf("Ingrese el valor de x1: ");
	scanf("%i",&coordenada.x1);
	printf("Ingrese el valor de x2: ");
	scanf("%i",&coordenada.x2);
	printf("Ingrese el valor de y1: ");
	scanf("%i",&coordenada.y1);
	printf("Ingrese el valor de y2: ");
	scanf("%i",&coordenada.y2);
	
	
    d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    
	printf("La distancia es: %d",c);
	pendiente=y2-y1/x2-x1;
	//Ec. de la recta
	
	printf("La ec. de la recta es: y-%d=%d(x-%d)", coordenada.y1,pendiente,coordenada.x1);

}

