//Dependencias
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
    struct CD{
        char title[10];
        char artist[20];
        int songNumber;
        float price;
    };
    
    getch();
    return EXIT_SUCCESS;
}
