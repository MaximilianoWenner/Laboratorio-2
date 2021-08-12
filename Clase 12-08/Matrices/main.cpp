#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rlutil.h"

using namespace rlutil;
using namespace std;

const int ANCHO_MENU = 23;
const int ALTO_MENU = 9;
const int POSMENUX = 33;
const int POSMENUY = 3;
const int COLOR_PANTALLA = DARKGREY;
const int LETRA = WHITE;
const int FONDO = BLACK;

#include "utilidades.h"
#include "funciones.h"

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "spanish");
    setConsoleTitle("Ejercicio matrices");
    const int FILAS = 10;
    const int COLUMNAS = 10;
    int opc, val;
    int m[FILAS][COLUMNAS];
    AjustarVentana(89,30);
    while(true){
        setBackgroundColor(COLOR_PANTALLA);
        cls();
        setColor(LETRA);
        recuadro(POSMENUX,POSMENUY, ANCHO_MENU,ALTO_MENU,LETRA,FONDO);
        separadorH(POSMENUX,POSMENUY+2,ANCHO_MENU,LETRA,FONDO);
        setBackgroundColor(FONDO);
        locate(POSMENUX+5,POSMENUY+1);
        cout << "MENÚ PRINCIPAL";
        locate(POSMENUX+3,POSMENUY+3);
        cout << "1. CARGAR MATRIZ";
        locate(POSMENUX+3,POSMENUY+4);
        cout << "2. MOSTRAR MATRIZ";
        locate(POSMENUX+3,POSMENUY+5);
        cout << "3. MOSTRAR FILA";
        locate(POSMENUX+3,POSMENUY+6);
        cout << "4. MOSTRAR COLUMNA";
        locate(POSMENUX+3,POSMENUY+7);
        cout << "5. EJERCICIOS TP";
        locate(POSMENUX+3,POSMENUY+8);
        cout << "0. FIN DEL PROGRAMA";
        locate(POSMENUX,POSMENUY+ALTO_MENU+1);
        cout << " SELECCIONE UNA OPCION: ";
        cin>>opc;
        switch(opc){
            case 1:
                cargarMatriz(m, FILAS, COLUMNAS);
                break;
            case 2:
                mostrarMatriz(m, FILAS, COLUMNAS);
                break;
            case 3:
                cls();
                cout<<"Ingrese la fila a mostrar: ";
                cin>>val;
                mostrarFila(m, FILAS, COLUMNAS, val);
                break;
            case 4:
                cls();
                cout<<"Ingrese la columna a mostrar: ";
                cin>>val;
                mostrarColumna(m, FILAS, COLUMNAS, val);
                break;
            case 5:
                submenuTP(m, FILAS, COLUMNAS);
                break;
            case 0:
                return 0;
        }
    }
    return 0;
}
