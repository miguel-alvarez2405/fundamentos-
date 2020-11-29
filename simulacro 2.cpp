// simulacro 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "stdio.h"
#include "math.h"

using namespace std;

	int area_(float cuadrado, float circulo, float l, float a,float opcion);
	int  main () 
{
	int   cuadrado,l,circulo,opcion,a , pi=3.1416;
		
	
	cout<<"ingrese el area del cuadrado  "<<endl;
	cin>>l;
	cuadrado = l*l;
	cout<< "ingrese el area del circulo"<<endl;
		cin>>a;
		circulo = a * pi*pi;
		
	switch (opcion){
		case 1: cout<<"area de cuadrado: " <<cuadrado<< endl;
			break ;
		case 2: cout<<"area de circulo:" <<circulo<< endl;
			break ;
		case 0: cout <<"salir";
		default : cout<<"opcion invalida"<< endl;
		}

	 
	 system ("pause");
	 
	 getch ();

	}
	
	