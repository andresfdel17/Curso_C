//Dependencias
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int Age;
    cout << "Por favor digite la edad de su hijo: " << endl;
    cin >> Age;
    if (Age > 0 && Age < 6)
    {
        cout << "Su hijo pertenece a la primera infancia" << endl;
    }
    else if (Age >= 6 && Age < 12)
    {
        cout << "Su hijo pertenece a la segunda infancia" << endl;
    }
    else
    {
        cout << "Su hijo pertenece al grupo de adolescencia" << endl;
    }

    getch();
    //En ubuntu no funciona el siguiente comando, por lo tanto he usado esta alternativa
    //system("pause");
    return EXIT_SUCCESS;
}
