//Dependencias
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    float Vi,Vf,t;
    cout<<"Por favor digite los datos necesarios: "<<endl;
    cout<<"Velocidad Final em m/s: "<<endl;cin>>Vf;
    cout<<"Velocidad Inicial em m/s: "<<endl;cin>>Vi;
    cout<<"Tiempo en segundos (s)"<<endl;cin>>t;

    cout<<"La aceleración del vehículo es: "<<((Vf-Vi)/t)<<" m/s^2"<<endl;
    getch();
    return EXIT_SUCCESS;
}
