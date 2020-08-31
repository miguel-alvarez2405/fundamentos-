/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include <math.h>

using namespace std;

int main()

{
float parcial, parcial1, parcial2, parcial3, final, practico1, practico2, libreta, practicos ;

cout<<"ingresar primer parcial1"<< endl;
cin>>parcial1;
cout<< "ingresar segundo parcial2"<<endl;
cin>> parcial2;
cout<< "ingresar tercer parcial3"<<endl;
cin>> parcial3;

parcial= ((parcial3+parcial2+parcial1)*0.4)/3; 

cout<<"el resultado de la suma es: "<<parcial<<endl;

cout<<"ingresar nota final"<< endl;
cin>> final;
 
cout<<"ingresar nota de practico1"<< endl;
cin>> practico1;
cout<<"ingresar nota de practico2"<< endl;
cin>> practico2;

practicos= ((practico1 + practico2)*0.2)/2;
cout<<" el resultado de la suma de practicos es: "<<practicos<<endl;


libreta= (practicos + parcial + final);
cout<<"suma final de libreta es: "<<libreta<<endl;

return 0;

}





