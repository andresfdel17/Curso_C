//Entrada y salida de datos
#include <iostream>
//Libreria de matematicas
#include <math.h>

using namespace std;

main()
{
    float x, y, answer = 0;
    cout << "Digite el valor de X: "<<endl;
    cin >> x;
    cout << "Digite el valor de Y: "<<endl;
    cin >> y;
    answer = (sqrt(x))/(pow(y, 2) - 1);
    cout << "La respuesta es: "<<answer<<endl;
}
