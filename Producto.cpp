#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto(){
    this->id = 0;
    this->nombre = "Sin nombre";
    this->cantidad = 0;
    this->precio = 0;
}

Producto::Producto(int id, string nombre, int cantidad, float precio){
    this->id = id;
    this->nombre = nombre;
    this->cantidad = cantidad;
    this->precio = precio;
}

int Producto::getPrecio(){return this->precio;}
float Producto::getCantidad(){return this->cantidad;}

void Producto::print(){
    cout << "id producto: " << this->id << endl;
    cout << "nombre: " << this->nombre << endl;
    cout << "cantidad: " << this->cantidad << endl;
    cout << "precio: " << this->precio << endl;
}
