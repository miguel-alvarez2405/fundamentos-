#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define MAX 100

using namespace std;

void cargar(int vec[],int n);
void mostrar(int vec[],int n);
void unir(int v1[],int n,int v2[],int m,int vec[],int &tam);
void burbuja (int vec[],int m);

void main(){
	int tam,n,m, A[MAX],B[MAX],C[MAX];
	
	do {
		cout<<"Ingresar el tamaño del primer vector:"<<endl ;
		cin>>n;
		cout<<"-------------------------------------"<<endl;
	} while ((n<=0)||(n>MAX));
	cargar(A,n); 
	do {
		cout<<"--------------------------------------"<<endl;
		cout<<"Ingresar el tamaño del segundo vector:"<<endl;
		cin>>m;
		cout<<"--------------------------------------"<<endl;
	} while ((m<=0)||(m>MAX));
	cargar(B,m);
	cout<<"----------------"<<endl;
	unir(A,n,B,m,C,tam); 
	cout<<"el vector1 y vector2 unidos: "<<endl;
	mostrar(C,tam);
	cout<<"----------------"<<endl;
	
	burbuja(C,tam);
	cout<<"el vector1 y vector2 concatenados: "<<endl;
	mostrar(C,tam); 
	getch();
}

void cargar(int vec[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"Vector["<<i<<"]= "<<endl;
		cin>>vec[i];
	}
}

void mostrar(int vec[],int n)
{
	for (int i=0;i<n;i++)
		cout<<"Vector["<<i<<"]= "<<vec[i]<<endl;
}

void unir(int v1[],int n,int v2[],int m,int vec[],int &tam)
{
	for (int i=0;i<n;i++)  
		vec[i]=v1[i];
	for (int i=0;i<m;i++) 
		vec[i+n]=v2[i];
	tam=n+m;
}

void burbuja (int vec[],int m)
{
	int aux;
	for (int i=0;i<m-1;i++)
	{
		for (int j=i+1;j<m;j++)
			if (vec[i]>vec[j])
			{
				aux=vec[j];
				vec[j]=vec[i];
				vec[i]=aux;
			}
	}	
}
