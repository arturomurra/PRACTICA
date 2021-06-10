#include "Cliente.h"
#include "Nota.h"

class Factura : public Nota{
private:
    float subtotal;
    float iva;
    Cliente cliente;

public:
    Factura();
    Factura(int, string, Producto *, int, Cliente);
    void print();
    float CalculaTotales();
};