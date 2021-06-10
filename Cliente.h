#include <string>
using namespace std;

class Cliente{
private:
    string nombre;
    string rfc;

public:
    Cliente();
    Cliente(string,string);
    string getNombre();
    string getRfc();
    void print();
};