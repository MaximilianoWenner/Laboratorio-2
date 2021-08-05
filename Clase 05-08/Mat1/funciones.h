#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

///PROTOTIPOS
void cargarM(int m[][3], int nf, int nc);
void mostrarM(int m[][3], int nf, int nc);
bool mostrarFila(int fila,int m[][3], int nf,int nc);
bool mostrarColumna(int columna,int m[][3], int nf,int nc);
///

///DESARROLLO DE FUNCIONES
void cargarM(int (*m)[3], int nf, int nc){
    int i, j, valor=1;
    for(i=0;i<nf;i++){
        for(j=0;j<nc;j++){
           // cout<<"INGRESAR UN NUMERO ENTERO PARA LA POSICION "<<"["<<i<<"]"<<"["<<j<<"] ";
            //cin>>m[i][j];
            ///cin>>*(*(m+i)+j);
            //m[i][j]=valor;///i*nc+j+1
            //valor++;
            m[i][j]=i*nc+j+1;
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

bool mostrarFila(int fila,int m[][3], int nf,int nc){
    if(fila<=0 || fila>nf) return false;
    int i;
    for(i=0;i<nc;i++){
        cout<<m[fila-1][i]<<"\t";
    }
    return true;
}

bool mostrarColumna(int columna,int m[][3], int nf,int nc){
    if(columna<=0 || columna>nc) return false;
    int i;
    for(i=0;i<nf;i++){
        cout<<m[i][columna-1]<<endl;
    }
    return true;
}

#endif // FUNCIONES_H_INCLUDED
