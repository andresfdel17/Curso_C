//Operaciones
#include <iostream>

using namespace std;

main()
{
    double first, second, suma, resta, mult, div;
    cout << "Digite el primer numero: " << endl;
    cin >> first;
    cout << "Digite el segundo numero: " << endl;
    cin >> second;

    suma = first + second;
    resta = first - second;
    mult = first * second;
    div = first / second;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicación es: " << mult << endl;
    cout << "La diisión es: " << div << endl;
}
