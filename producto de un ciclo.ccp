#include "stdafx.h"
#include "iostream" 
#include "conio.h"
#include "math.h"

using namespace std;

int producto(int n);

int main(){
	int n,p;
	cout<<"ingrese el valor para N"<<endl;
	cin>>n;
	p= producto(n);
	cout<<"el producto de los numeros hasta N es : "<<p<<endl;

	getch();
return 0;
}

int producto(int n){
	int producto=1;
	for(int k=1;k<=n;k++){
	producto = producto * k;
	}
	return producto;

}
