#include <iostream>
#include "LCD.h"

using namespace std;

int main()
{
    cout << "Uso de LCD" << endl;
    Lista2 C;
    C = NULL;
    Listar(C);

    agregar(C,1);
    Listar(C);

    agregar(C,2);
    Listar(C);

    agregar(C,3);
    Listar(C);

    agregar(C,4);
    Listar(C);

    ListarR(C);


    return 0;
}
