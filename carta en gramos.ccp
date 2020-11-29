#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <math.h>

using namespace std;

int main() {
	int peso;
	cout<<"ingrese el peso en gramos de su carta ";
	cin>>peso;
	if(peso>=0){
		if(peso>50){
			if(peso>100 || peso<50){
				if(peso>200 || peso<100){
					if(peso>350 || peso<200){
						if(peso>500 || peso<300){
						cout<<"NO SE PUEDE ENVIAR COMO CARTA";
						}
						else {
						cout<<"el costo de envio es de Bs.15.00";
						}
					}
					else {
					cout<<"el costo es de Bs.10.50";
					}
				}
				else {
				cout<<"el costo es de Bs.6.00";
				}
			}
			else{
			cout<<"el costo es de Bs.4.00";
			}
		}
		else {
		cout<<"el costo es de Bs.1.50";
		}
	
	}
	else {
	cout<<"no se puede enviar";
	}



		getch();
return 0;
}
