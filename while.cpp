// while.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
	int i,facto,numero;
	i=1
	facto=1
	cout<<"ingresar el numero: ";
	cin>>numero;
	while (i<=numero)
	{
		facto=facto*i;
		i=i+1
	}

	cout<< "el valor factorial de: "<<numero<<" es: "<<facto;


	getch ();
}

