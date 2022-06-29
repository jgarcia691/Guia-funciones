#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Ejercicio 3
//Escribir un programa que reciba una serie de cadenas de caracteres como argumentos. El programa deber� concatenarlas y dar la vuelta a la cadena resultante. La cadena que almacene la concatenaci�n de los argumentos debe utilizar la memoria justa y necesaria.

char *concatenacion_inv (char *str1,char *str2){ //Funcion tipo puntero char para concatenar e invertir 2 cadenas pasadas por referencia
	char *newstr;   //Declaracion del puntero a la nueva cadena
	int size1, size2,size3,i,j;  
	size1=strlen(str1);  //calculo de tama�o de cada cadena
	size2=strlen(str2);
	
	newstr= (char *)malloc(size1+size2); //Asignacion de memoria a la nueva cadena 
	strcpy(newstr,str1); //copia de la primera la cadena a la nueva cadena
	strcat(newstr,str2); //concatenacion de la nueva cadena junto con la segunda cadena
	size3=strlen(newstr); //calculo de tama�o de la cadena nueva
	
	char temp; //variable temporal
	for(i=0,j=size3-1;i<(size3/2);i++,j--){  //Ciclo repetitivo para invertir la cadena nueva
 		temp=newstr[j];
		newstr[j]=newstr[i];
		newstr[i]=temp;
	}
	
	return newstr; //retorna la direccion de memoria de la nueva cadena
	
}

int main(){
	char str1[]= "buenos dias "; //declaracion de ambas cadenas
	char str2[]="amigos";
	
	char *str3; //declaracion del puntero tipo char que recibira la direccion de memoria de la nueva cadena
	
	str3= concatenacion_inv(str1,str2); //asignacion de la nueva cadena llamando a la funcion concatenacion_inv
	
	printf("%s",str3); //Salida
	return 0;
	
}


