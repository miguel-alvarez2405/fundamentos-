/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// menu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
   int a, b, r, opcion;
   do {
     cout << endl;
     cout << "1.- Suma" << endl;
     cout << "2.- Resta" << endl;
     cout << "3.- Producto" << endl;
     cout << "4.- División" << endl;
     cout << "0.- Salir" << endl;
     cout << "Elige una opción: " ;
     cin >> opcion;
     cout << "Ingrese a: " ;
     cin >> a;
     cout << "Ingrese b: " ;
     cin >> b;
     switch (opcion) {
	    case 1: r = a + b; break;
	    case 2: r = a - b; break;
	    case 3: r = a * b; break;
	    case 4: r = a / b; break;
		case 0: cout << "Salir";break;
	    default: cout << "Opcion invalida" << endl;
     }
     if ((opcion>=1)&&(opcion<=4)) 
     	cout << "El resultado es " << r << endl;
   } while (opcion != 0);
   getch();
}