#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
///PROTOTIPO

Articulo cargarArticulo();
void mostrarArticulo(Articulo );
void cargarArticulos(Articulo *, int);
void mostrarArticulos(Articulo *, int );



///DESARROLLO DE FUNCIONES
Articulo cargarArticulo(){
    Articulo reg;
    cout<<"CODIGO DE ARTICULO: ";
    cin>>reg.codigoArticulo;
    cout<<"DESCRIPCION: ";
    cin>>reg.descripcion;
    cout<<"PRECIO: ";
    cin>>reg.pu;
    cout<<"UNIDADES EN STOCK: ";
    cin>>reg.stock;
    return reg;
}

void mostrarArticulo(Articulo reg){
    cout<<"CODIGO DE ARTICULO: ";
    cout<<reg.codigoArticulo<<endl;
    cout<<"DESCRIPCION: ";
    cout<<reg.descripcion<<endl;
    cout<<"PRECIO: ";
    cout<<reg.pu<<endl;
    cout<<"UNIDADES EN STOCK: ";
    cout<<reg.stock<<endl;
}

void cargarArticulos(Articulo *v, int tam){
    int i;
    for(i=0;i<tam;i++){
        v[i]=cargarArticulo();
    }

}

void mostrarArticulos(Articulo *v, int tam){
    int i;
    for(i=0;i<tam;i++){
        mostrarArticulo(v[i]);
        cout<<endl;
    }

}

#endif // FUNCIONES_H_INCLUDED
