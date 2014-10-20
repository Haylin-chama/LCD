#include <iostream>
#include "LCD.h"

using namespace std;

void agregar(Lista2 &C, int e)
{
    Lista2 p;
    p = new Nodo;
    p->Info = e;
    p->ant = p;
    p->sig = p;

    if(C == NULL)
        C = p;
    else{
        p->ant = C;
        p->sig = C->sig;
        p->sig->ant = p;
        C->sig = p;
    }
}

void Listar(Lista2 C){
    Lista2 p;
    cout << endl << "Lista LCD " << endl;
    if(C!=NULL){
        p = C;
        cout << "Valor : " << p->Info << endl;
        p = p->sig;
        while(p != C){
            cout << "Valor : " << p->Info << endl;
            p = p->sig;
        }
    }
}

void ListarR(Lista2 C){
    Lista2 p;
    cout << endl << "Lista LCD " << endl;
    if(C!=NULL){
        p = C;
        cout << "Valor : " << p->Info << endl;
        p = p->ant;
        while(p != C){
            cout << "Valor : " << p->Info << endl;
            p = p->ant;
        }
    }
}
