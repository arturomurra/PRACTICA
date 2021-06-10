#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente(){
    this->nombre = "Sin nombre";
    this->rfc = "Sin rfc";
}

Cliente::Cliente(string nombre, string rfc){
    this->nombre = nombre;
    this->rfc = rfc;
}

string Cliente::getNombre(){return this->nombre;}
string Cliente::getRfc(){return this->rfc;}

void Cliente::print(){
    cout << this->nombre << endl;
    cout << this->rfc << endl;
}