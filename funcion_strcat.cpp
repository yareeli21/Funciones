//Añadir o concatenar una cadena con otra - Función strcat()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
//se busca unir todas las cadenas
int main(){
	char cat1[]= "Esto es una cadena";
	char cat2[]= " de ejemplo";
	char cat3[30];
	
	strcpy(cat3,cat1); //cat3 ="Esto es una cadena"
	
	strcat(cat3,cat2); //cat3 = "Esto es una cadena de ejemplo"
	//esta función añade al final lo que tu quieres
	
	cout<<cat3<<endl;
	
	
	getch();
	return 0;
}