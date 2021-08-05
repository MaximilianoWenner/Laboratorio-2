#include <iostream>
#include <cstdlib>

using namespace std;

#include "funciones.h"

int main(){
    int opc, mat[5][3], fila, columna;
    while(true){
        system("cls");
        cout<<"1.	Cargar matriz"<<endl;
        cout<<"2.	Mostrar matriz"<<endl;
        cout<<"3.	Mostrar fila"<<endl;
        cout<<"4.	Mostrar columna"<<endl;
        cout<<"5.	Salir"<<endl<<endl;
        cout<<"SELECCIONE UNA OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cargarM(mat,5,3);
                    break;
            case 2: mostrarM(mat,5,3);
                    break;
            case 3: cout<<"INGRESE EL NUMERO DE FILA A MOSTRAR: ";
                    cin>>fila;
                    if(mostrarFila(fila, mat, 5,3)==false){
                            cout<<"LA FILA INGRESADA NO ES CORRECTA"<<endl;
                    }
                    break;
            case 4: cout<<"INGRESE EL NUMERO DE COLUMNA A MOSTRAR: ";
                    cin>>columna;
                    if(mostrarColumna(columna, mat, 5,3)==false){
                            cout<<"LA COLUMNA INGRESADA NO ES CORRECTA"<<endl;
                    }
                    break;
            case 5: return 0;
                    break;
            default:cout<<"EL NUMERO INGRESADO ES INCORRECTO. VUELVA A INGRESAR";
                    break;


        }
        cout<<endl;
        system("pause");
    }
    cout <<endl;
    system("pause");
    return 0;
}
