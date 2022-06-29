#include <stdio.h>
#include <math.h>

//Ejercicio 4
//Escribir una función que calcule y presente las raíces reales de la ecuación de segundo grado ax2+bx+c=O

void ec_cuadratica (float a, float b, float c,float *x){ //Funcion void que recibe por referencia un arreglo donde se guardaran las raices y como argumentos los valores a,b y c para calcular las raices de la ec cuadratica
	float raiz;
	
	raiz=pow(a,2)-(4*a*c); // calculo del contenido dentro de la raiz de la formula de la resolvente
	if (raiz>0){ //condicion si el contenido de la raiz da mayor que 0
		
		printf("Las raices son reales \n");
		x[0]=(-b+(sqrt(raiz)))/(2*a); //calculo de las raices siendo reales
		x[1]=(-b-(sqrt(raiz)))/(2*a);
		
		
	}else{
		if (raiz==0){ //condicion si el contenido de la raiz es igual a 0
			x[0]=(-b)/(2*a); //calculo de la raiz unica
			printf("La ecuacion solo tiene una raiz \n");
			
		}else{
			x[0]=(-b/(2*a)); //calculo de las raices
			x[1]=(sqrt(-raiz))/(2*a);
			printf ("La ecuacion posee una raiz real y otra imaginaria \n");
		
		}
	}
	return; //retorno a la funcion principal
}

int main(){
	float a,b,c,x[2]; //declaracion de variables
	printf("Introduzca los valores a , b , c tienendo en cuenta que la ecuacion es: \n aX2+bX+c=0 \n");
	scanf("%f %f %f",&a,&b,&c); //Lectura de datos a,b,c
	ec_cuadratica(a,b,c,x); //llamada a la funcion
	if(x[1]!=0) //condicion para verificar si existe una segunda raiz
		printf("x1 = %.2f    x2= %.2f ",x[0],x[1]); //salida de datos si existen 2 raices ya sean reales o imaginarias
	else
		printf("x1 = %.2f ",x[0]); //salida de datos si existe solo una raiz
	return 0; //fin del programa
}
