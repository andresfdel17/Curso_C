//Dependencias
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    float note_1, note_2, note_3, note_4, prom;

    cout << "Por favor digite la nota Número 1" << endl;
    cin >> note_1;
    cout << "Por favor digite la nota Número 2" << endl;
    cin >> note_2;
    cout << "Por favor digite la nota Número 3" << endl;
    cin >> note_3;
    cout << "Por favor digite la nota Número 4" << endl;
    cin >> note_4;
    prom = (note_1 + note_2 + note_3 + note_4) / 4;
    if (prom < 3)
    {
        cout << "No Aprobado" << endl;
    }
    else if (prom < 3.5 && prom > 3)
    {
        cout << "En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar." << endl;
    }
    else
    {
        cout << "Aprobado" << endl;
    }
    getch();
    //En ubuntu no funciona el siguiente comando, por lo tanto he usado esta alternativa
    //system("pause");
    return EXIT_SUCCESS;
    //Andrés Felipe Delgado Gutierrez
}
