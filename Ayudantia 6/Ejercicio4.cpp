#include <iostream>
#include <queue>
using namespace std;

class Cliente {

public:
    string nombre;
    
    Cliente(string n): nombre(n) {}

};

class Supermercado {
public:
    queue<Cliente> fila;

    void agregarCliente(Cliente c) {

        fila.push(c);
        cout << c.nombre << " ha entrado a la fila." << endl;

    }

    void atenderCliente() {

        if (!fila.empty()) {

            cout<<"Atendiendo a: "<<fila.front().nombre << endl;
            fila.pop();

        }
    }

};

int main() {
    Supermercado lider;

    lider.agregarCliente(Cliente("CLiente 1"));
    lider.agregarCliente(Cliente("Cliente 2"));
    lider.agregarCliente(Cliente("Cliente 3"));

    while (!lider.fila.empty()) {
        lider.atenderCliente();
    }

    return 0;
}