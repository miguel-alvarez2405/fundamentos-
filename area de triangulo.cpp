// area de triangulo.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "conio.h"


using namespace std;

int main ()
{
 
	float base,altura,area ;
	cout<<"ingrese base"<<endl;
	cin>> base;
	cout<<"ingrese altura"<<endl;
	cin>> altura;
	
	area=(base*altura)/2;
	cout<<"El area es: "<<area;

	getch ();
  }

