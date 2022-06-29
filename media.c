#include <stdio.h>

//Ejercicio 2
//Escribir un programa que reciba como argumento un conjunto de números. Calcular la media mediante una función.

int media (int num[],int size){  //Funcion para el calculo de la media de un conjunto de numeros
	
	int prom=0,j; //Declaracion de variables dentro de la funcion
	
	for (j=0;j<=size-1;j++) //ciclo repetitivo para acumular la suma de cada elemento
		prom=prom+num[j]; 
	
	return (prom/size); //retorna el promedio
	
}

int main (){
	int array[5],sizeoff=5,i; //Declaracion de variables
	for (i=0;i<sizeoff;++i){ //LLenado del arreglo
		printf("Introduce un numero: Posicion %d \n",i); 
		scanf("%d",&array[i]);
	}
	printf("El promedio es: %d",media(array,sizeoff)); //Salida de datos llamando a la funcion media
	
	return 0;

}
