// j.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream> 

using namespace std;

 void main()
 {
	float P;

	cout<<"Ingrese P "<<endl;

	cin>>P;

	if 	(P<=0)
		{cout<<"ERROR"<<endl;
	}else
	
	if ((P>0) && (P<=50))
		{cout<<"El costo es: 1.50 Bs."<<endl;
	}else
	
	if((P>50) && (P<=100))
		{cout<<"El costo es: 4.00 Bs."<<endl;
	}else

	if((P>100) && (P<=200))
		{cout << "El costo es :6.00 Bs."<<endl;
	}else
	
	if((P>200)&&(P<=350))
		{cout<<"El costo es: 10.50 Bs."<<endl;
	}
	else
	
	if((P>350) && (P<=500))
		{cout<<"El precio es: 15.00 Bs"<<endl;
	}else
	if(P>500)
		{cout<<"No se puede enviar como carta."<<endl;
		}
	
	getch();
}
