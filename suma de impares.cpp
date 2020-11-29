#include "stdafx.h"
#include "conio.h"
#include <iostream>
using namespace std;

void main() 
{
     int n=0, suma;
     suma=0;
cout<<"Ingresa el valor de n: ";
cin>>n;
for (int i=1; i<=n; i++){
	if (i%2 !=0)
	suma=suma+i;
	
}
cout<<"la suma de los impares es: "<<suma;


getch();

}
