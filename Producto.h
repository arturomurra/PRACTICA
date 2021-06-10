#include <string>
using namespace std;

class Producto{

private:
    int id;
    string nombre;
    int cantidad;
    float precio;

public:
    Producto();
    Producto(int, string, int, float);
    int getPrecio();
    float getCantidad();
    void print();
};