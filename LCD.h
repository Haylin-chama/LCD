#ifndef LCD_H_INCLUDED
#define LCD_H_INCLUDED

typedef struct Nodo{
    int Info;
    struct Nodo *ant;
    struct Nodo *sig;
};

typedef Nodo *Lista2;

void agregar(Lista2 &, int);
void Listar(Lista2);
void ListarR(Lista2);

//void Mostrar(Lista2);
//void Eliminar(Lista2 &);

#endif // LCD_H_INCLUDED
