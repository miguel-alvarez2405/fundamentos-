/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
using namespace std;
#include <iostream>
int main()
{
    float diametro, radio, pi, perimetro, area, volumen ;
    
    cout<<"ingrese el valor del diametro";
    cin>> diametro;
    pi= 3.1416 ;
    radio= diametro/2;
    perimetro= diametro*pi;
    area= radio*radio*pi*4;
    volumen= (4/3)*radio*radio*radio*pi;
    cout<<" el perimetro es :"<<perimetro<<endl;
    cout<<" el area es :"<<area<<endl;
    cout<<" el volumen es :"<<volumen<<endl;
    

    return 0;
}
