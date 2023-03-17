//Transformar una cadena a números - Función atoi() y atof()

//"123" esto es una cadena de caracteres ---> 123 se convirtió en un valor entero (atoil)
//"123.45" ---> 123.45 (atof) para valores flotantes

#include<iostream>
#include<conio.h>
#include<stdlib.h> //con esta libreria funcionan atoil y atof

using namespace std;

int main(){
	char cad[]= "123"; //esto es una cadena de caracteres
	char cad1[]= "123.456";
	int numero; //para almacenar el valor entero 
	float numero1; //para almacenar el número flotante a valor entero y no cadena de caracteres
	
	numero = atoi(cad);
	
	cout<<numero<<endl;
	
	numero1 = atof(cad1);
	
	cout<<numero1<<endl;
	
	getch();
	return 0;
}