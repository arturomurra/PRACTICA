#include "Nota.h"
#include <iostream>
using namespace std;

Nota::Nota(){
    this->id = 0;
    this->fecha = "00-00-0000";
    this->productos = new Producto[1];
    this->nproductos = 0;
}

Nota::Nota(int id, string fecha, Producto * productos, int nproductos){
    this->id = id;
    this->fecha = fecha;
    this->productos = productos;
    this->nproductos = nproductos;
}

float Nota::costoTotal(){
    float total = 0;
    for(int i=0; i<this->nproductos; i++){
        total += this->productos[i].getPrecio()*this->productos[i].getCantidad();
    }
    return total;
}

void Nota::print(){
    //Información primaria
    cout << "id nota: " << this->id << endl;
    cout << "fecha: " << this->fecha << endl;
    cout << "cantidad producto: " << this->nproductos << endl;
    cout << "-------" << endl;
    //Mostrar productos
    for(int i=0; i<this->nproductos; i++){
        productos[i].print();
        cout << "----" << endl;
    }
    float total = costoTotal();
    cout << "Total: " << total << endl;
}