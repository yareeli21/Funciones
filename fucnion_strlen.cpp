//Longitud de una cadena de carácteres - Función strlen()
// esta función es para saber la cantidad de elementos que tiene la cadena que ingresamos desde un principio

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[]="Hola, que tal?";
	int longitud=0;
	
	longitud=strlen(palabra);
	
	cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;
	
	
	getch();
	return 0;
}