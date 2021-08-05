//Ejercicio:
//Autor:DEK
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


void cargarM(int m[3][3], int nf, int nc);
void mostrarM(int m[][3], int nf, int nc);

int main(){
    int mat[3][3];
    cargarM(mat,3,3);
    system("cls");
    mostrarM(mat,3,3);
    system("pause");
	return 0;
}

void cargarM(int (*m)[3], int nf, int nc){
    int i, j;
    for(i=0;i<nf;i++){
        for(j=0;j<nc;j++){
            cout<<"INGRESAR UN NUMERO ENTERO PARA LA POSICION "<<"["<<i<<"]"<<"["<<j<<"] ";
            cin>>m[i][j];
            ///cin>>*(*(m+i)+j);
        }
    }

}

void mostrarM(int m[][3], int nf, int nc){
    int i, j;
    for(i=0;i<nf;i++){
        for(j=0;j<nc;j++){
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }

}

/*
Hacer un proyecto con las siguientes opciones de menú

1.	Cargar matriz
2.	Mostrar matriz
3.	Mostrar fila
4.	Mostrar columna
5.	Salir

La matriz debe ser de tipo entero de 5 filas y 3 columnas.
Cada una de las opciones del menú debe llamar a una función que resuelva lo que se pide.
La opción 3 debe mostrar una de las filas. El número de fila a mostrar se debe ingresar por teclado.
La opción 4 debe mostrar una de las columnas. El número de columna a mostrar se debe ingresar por teclado.
*/
