/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

int main()

{
int a,b,suma,resta,multiplicacion;
float division,resto;


cout<<"ingrese el primer numero: ";
cin<< a;
cout<<"ingrese el segundo numero: ";
cin<< b;
suma= a+b ;
cout<<" la suma es : "<<suma<<endl;
resta= a-b;
cout<<"la resta es : "<<resta<<endl;
multiplicacion= a*b;
cout<<"el producto es : "<<multiplicacion<<endl;
division= a/b; 
cout<<"la division es : "<<division<<endl;
resto= a%b;
cout<<" el resto es : "<<resto;

getch();
return 0;
}
