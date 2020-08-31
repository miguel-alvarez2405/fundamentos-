#include <iostream>

using namespace std;

int main()
{
    float c, interes, ninteres;
    int years;

    cout<<"Cuanta es su capital?"<<endl;
    cin>>c;
    cout<<"Cual es el interes"<<endl;
    cin>>interes;
    cout<<"por cuantos años"<<endl;
    cin>>years;
    interes = ((interes / 100) + 1);
    if (years > 1)
    {
        ninteres = (c * interes * years) - (c * (years-1));
        cout<<"su interes simple es " << ninteres << "$"<<endl;
    }
    else
    {
        cout<<"su interes simple es" << (interes*years*c) << "$"<<endl;
    }
    return 0;
}