#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void cargarMatriz(int m[][10], int nf, int nc);
void mostrarMatriz(int m[][10], int nf, int nc);
void mostrarFila(int m[][10], int nf, int nc, int val);
void mostrarColumna(int m[][10], int nf, int nc, int val);
void submenuTP(int m[][10], int nf, int nc);
void mostrarMaximoFila(int m[][10], int nc, int val);
void mostrarMaximoColumna(int m[][10], int nf, int val);
int buscarMaximo(int *v, int tam);
void mostrarColumna2(int *v, int nf, int nc);
void mostrarValorSuma(int m[][10], int nf, int nc);

void cargarMatriz(int m[][10], int nf, int nc){
    for(int i=0;i<nf;i++){
        for(int j=0;j<nc;j++){
            //m[i][j]=i*nc+j+1;
            m[i][j]=rand()%100;
        }
    }
}

void mostrarMatriz(int m[][10], int nf, int nc){
    cls();
    for(int i=0;i<nf;i++){
        for(int j=0;j<nc;j++){
            locate(POSMENUX-10+j*4,POSMENUY+i);
            if(m[i][j]<10){
                cout<<"00";
            }else if(m[i][j]<100){
                cout<<"0";
            }
            cout<<m[i][j];
        }
        cout<<endl;
    }
    anykey();
}

void mostrarFila(int m[][10], int nf, int nc, int val){
    cls();
    for(int i=0;i<nc;i++){
        locate(POSMENUX-10+i*4,POSMENUY);
            if(m[val][i]<10){
                cout<<"00";
            }else if(m[val][i]<100){
                cout<<"0";
            }
            cout<<m[val][i];
    }
    anykey();
}
void mostrarColumna(int m[][10], int nf, int nc, int val){
    cls();
    for(int i=0;i<nc;i++){
        locate(POSMENUX-10+i*4,POSMENUY);
            if(m[i][val]<10){
                cout<<"00";
            }else if(m[i][val]<100){
                cout<<"0";
            }
            cout<<m[i][val];
    }
    anykey();
}

void submenuTP(int m[][10], int nf, int nc){
    int opc, val;
    while(true){
        setBackgroundColor(COLOR_PANTALLA);
        cls();
        setColor(LETRA);
        recuadro(POSMENUX,POSMENUY, ANCHO_MENU+11,ALTO_MENU-1,LETRA,FONDO);
        separadorH(POSMENUX,POSMENUY+2,ANCHO_MENU+11,LETRA,FONDO);
        setBackgroundColor(FONDO);
        locate(POSMENUX+5,POSMENUY+1);
        cout << "MENÚ TP";
        locate(POSMENUX+3,POSMENUY+3);
        cout << "1. MOSTRAR MAXIMO FILA";
        locate(POSMENUX+3,POSMENUY+4);
        cout << "2. MOSTRAR MAXIMO COLUMNA";
        locate(POSMENUX+3,POSMENUY+5);
        cout << "3. MOSTRAR SUMA DE COMPONENTES";
        locate(POSMENUX+3,POSMENUY+6);
        cout << "4. MOSTRAR COLUMNA";
        locate(POSMENUX+3,POSMENUY+7);
        cout << "0. FIN DEL PROGRAMA";
        locate(POSMENUX,POSMENUY+ALTO_MENU);
        cout << " SELECCIONE UNA OPCION: ";
        cin>>opc;
        switch(opc){
            case 1:
                system("cls");
                cout<<"Ingrese la fila a buscar el maximo: ";
                cin>>val;
                if(val<0 || val>=nf){
                    cout<<"Valor fuera de rango."<<endl;
                    system("pause");
                }else{
                    mostrarMaximoFila(m, nc, val);
                }
                break;
            case 2:
                system("cls");
                cout<<"Ingrese la columna a buscar el maximo: ";
                cin>>val;
                if(val<0 || val>=nc){
                    cout<<"Valor fuera de rango."<<endl;
                    system("pause");
                }else{
                    mostrarMaximoColumna(m, nf, val);
                }
                break;
            case 3:
                mostrarValorSuma(m, nf, nc);
                break;
            case 4:
                cls();
                cout<<"INGRESE EL NUMERO DE LA COLUMNA A MOSTRAR: ";
                cin>>val;
                mostrarColumna2(&m[0][val], 10, 10);
                break;
            case 0:
                return;
        }
    }
}

void mostrarMaximoFila(int m[][10], int nc, int val){
    system("cls");
    int posMax=buscarMaximo(&m[val][0],10);
    cout<<"EL VALOR MAXIMO DE LA FILA "<<val<<" ES: "<<m[val][posMax]<<" QUE ESTA EN LA COLUMNA "<<posMax;
    anykey();
}

int buscarMaximo(int *v, int tam){
    int posMax=0;
    for(int i=1;i<tam;i++){
        if(v[i]>v[posMax]){
            posMax=i;
        }
    }
    return posMax;
}

void mostrarMaximoColumna(int m[][10], int nf, int val){
    int posMax=0;
    for(int i=1;i<nf;i++){
        if(m[i][val]>m[posMax][val]){
            posMax=i;
        }
    }
    cout<<"EL VALOR MAXIMO DE LA COLUMNA "<<val<<" ES: "<<m[posMax][val]<<" QUE ESTA EN LA FILA "<<posMax;
    anykey();
}

void mostrarColumna2(int *v, int nf, int nc){
    for(int i=0;i<nf;i++){
        cout<<v[i*nc]<<"\t";
    }
    anykey();
}

void mostrarValorSuma(int m[][10], int nf, int nc){
    cls();
    int acum=0;
    for(int i=0;i<nf;i++){
        for(int j=0;j<nc;j++){
            acum+=m[i][j];
        }
    }
    cout<<"EL VALOR DE LA SUMA DE TODOS LOS ELEMENTOS DE LA MATRIZ ES: "<<acum;
    anykey();
}

#endif // FUNCIONES_H_INCLUDED
