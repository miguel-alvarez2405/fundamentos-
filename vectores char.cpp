#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <string.h>

using namespace std;

int main(){

		char nombre1[]="rodrigo";
	cout<<nombre1<<endl;

	char nombre2[]={'r','o','d','r','i','g','o'};
	cout<<nombre2<<endl;

	
	char nombre[20];
	cout<<"ingrese su nombre completo"<<endl;
	cin.getline(nombre,20,'\n');
	cout<<nombre<<endl;

	
getch();
return 0;
}
