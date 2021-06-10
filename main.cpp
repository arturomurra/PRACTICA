#include <iostream>
//#include "Producto.h"
//#include "Nota.h"
#include "Factura.h"

int main(){
    //Creación productos
    Producto p1(1, "silla madera tx", 5, 775.20);
    Producto p2(2, "mesa de vidrio", 1, 1420);
    Producto p3(3, "florero", 1, 184.20);
    Producto * productos = new Producto[3];
    productos[0] = p1;
    productos[1] = p2;
    productos[2] = p3;
    //Creación nota
    cout << "Nota: " << endl << "===================" << endl;
    Nota n1(101, "10-06-2021", productos, 3);
    n1.print();
    cout << "********************" << endl; 
    //Creación cliente
    Cliente c1("Juan Perez", "PERJ090999");
    //c1.print();
    //Creación factura
    cout << endl << "Facturacion: " << endl << "===================" << endl;
    Factura f1(101, "10-06-2021", productos, 3, c1);
    f1.print();
    return 0;
}