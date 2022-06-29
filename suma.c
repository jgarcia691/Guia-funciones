#include <stdio.h>

// Ejercicio 1
// Escribir una función que sume dos números. Implemente un programa que la utilice.

int suma (int n1, int n2){ //Esta funcion retorna la suma de 2 numeros que recibe como argumento
	return (n1+n2);
}

// Funcion Principal
int main (){
	int n1,n2; //Declaracion de variables
	printf ("Introduce 2 numeros \n");
	scanf("%d %d",&n1,&n2); //Lectura de los datos
	
	printf("La suma es: %d \n",suma(n1,n2)); //Salida de datos llamando a  la funcion suma
	return 0;
}
