//Dependencias
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    //Declaro variables
    int number;
    //Pido número al usuario
    cout<<"Por favor digite un número"<<endl;
    cin>>number;
    //Itero para generar las tablas de multiplicar (consultado)
    for (size_t i = 1; i <= 10; i++)
    {
       cout<<number<<" * "<<i<<" = "<<(number * i)<<endl;
    }

    //Pido tecla para finalizar ejecución
    system("pause");
    return EXIT_SUCCESS;
}
