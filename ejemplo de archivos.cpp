// ejemplo de archivos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribir();

int main () {
	escribir ();
	system ("pause");
		return 0;
}
void escribir(){
	ofstream archivo;
	archivo.open("prueba.txt",ios::out); //abriendo archivo
	if (archivo.fail()) {
		cout<<"no se pudo abrir el archivo"<<endl;
		exit(1);

	}
	archivo<<"hola que tal? mi nombre es miguel";

	archivo.close() ;  //cerrar el archivo 


