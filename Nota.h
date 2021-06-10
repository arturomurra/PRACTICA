#include <string>
#include "Producto.h"
using namespace std;

class Nota{
protected:
    int id;
    string fecha;
    Producto * productos;
    int nproductos;
    
public:
    Nota();
    Nota(int,string,Producto *, int);
    float costoTotal();
    virtual void print();
};