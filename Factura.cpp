#include "Factura.h"
#include <iostream>
using namespace std;

Factura::Factura(){
    this->id = 0;
    this->fecha = "00-00-0000";
    this->productos = new Producto[1];
    this->nproductos = 0;
    this->subtotal = 0;
    this->iva = 0;
    this->cliente = Cliente();
}

Factura::Factura(int id, string fecha, Producto * productos, int nproductos, Cliente cliente){
    this->id = id;
    this->fecha = fecha;
    this->productos = productos;
    this->nproductos = nproductos;
    this->subtotal = 0;
    this->iva = 0;
    this->cliente = cliente;
}

float Factura::CalculaTotales(){
    float total = costoTotal();
    this->subtotal = total/1.16;
    this->iva = total-subtotal;
    return total;
}

void Factura::print(){
    //Información primaria
    cout << "id nota: " << this->id << endl;
    cout << "fecha: " << this->fecha << endl;
    this->cliente.print();
    cout << "cantidad producto: " << this->nproductos << endl;
    cout << "-------" << endl;
    //Mostrar productos
    for(int i=0; i<this->nproductos; i++){
        productos[i].print();
        cout << "----" << endl;
    }
    float total = CalculaTotales();
    cout << "Subtotal: " << this->subtotal << endl;
    cout << "IVA: " << this->iva << endl;
    cout << "Total: " << total << endl;
}