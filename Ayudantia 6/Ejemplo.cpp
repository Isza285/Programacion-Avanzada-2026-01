#include <iostream>
#include <queue>
using namespace std;

class Banco{

public:

    queue<string> clientes;

    void agregarCliente(string nombre){
        clientes.push(nombre);
    }

    void atenderCliente(){
        if(!clientes.empty()){
            
            cout << "Atendiendo a: "<< clientes.front() << endl;
            clientes.pop();
            
        }
    }

};

int main(){

    Banco b;

    b.agregarCliente("Pedro");
    b.agregarCliente("Juan");
    b.agregarCliente("Diego");

    b.atenderCliente();
    b.atenderCliente();

    return 0;
}