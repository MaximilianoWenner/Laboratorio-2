#include <iostream>
#include <cstring>

using namespace std;

struct Articulo{
    char codigoArticulo[5];
    char descripcion[30];
    float pu;
    int stock;
};

#include "funciones.h"

int main(){
    int opc;

    Articulo art, vArt[5];
    //art=cargarArticulo();
    //mostrarArticulo(art);
    while(true){
        system("cls");
        cout << "..............................." << endl;
        cout << "1. CARGAR ARTICULOS" << endl;
        cout << "2. MOSTRAR ARTICULO POR CODIGO" << endl;
        cout << "3. MOSTRAR TODOS LOS ARTICULOS" << endl;
        cout << "0. SALIR" << endl;
        cout << "..............................." << endl;
        cout << "OPCION: " << endl;
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cargarArticulos(vArt, 5);
                    break;
            case 2:
                    break;
            case 3: mostrarArticulos(vArt, 5);
                    break;
            case 0: return 0;
                    break;
            default: cout<<"OPCION INCORRECTA"<<endl;
                    break;
        }
        system("pause");
    }
    return 0;
}
