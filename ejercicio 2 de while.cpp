// ejercicio 2 de while.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;

void main()
{
	int mayor,menor, numero;
	float n,i,promedio,suma;

	cout<<"ingrese una cantidad n de numeros";
	cin>>n;
	suma=0;
	cout<<"ingrese un valor";
	cin>> numero;
	mayor=numero;
    menor=numero;

	while(i<=n)
	{
		i=i+1; //aumentar el contador
		suma= suma+numero; //acumulador de la suma
		
		if (mayor<numero)
		   mayor=numero;
		if (menor>numero)
			menor= numero;
		if(i<=n) {

		cout<<"ingrese un valor";
		cin>>numero;}
	}
	cout<<"el mayor es: "<<mayor<<endl;
	cout<<" el menor es: "<<menor<<endl;
	cout<<"el promedio es :"<<suma/n<<endl;

	getch ();
}

