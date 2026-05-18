#include <iostream>
#include <queue>
using namespace std;

class Restaurante {
public:
    queue<string> pedidos;

    void agregarPedido(string plato) {
        pedidos.push(plato);
        cout<< "Nuevo pedido ingresado: "<<plato<<endl;
    }

    void prepararPedido() {

        if (!pedidos.empty()) {

            cout<<"Preparando pedido: "<<pedidos.front()<<endl;
            pedidos.pop();

        } else {
            cout<<"No hay pedidos pendientes."<<endl;
        }

    }
};

int main() {
    Restaurante local;
    local.agregarPedido("Pizza");
    local.agregarPedido("Hamburguesa");
    local.agregarPedido("Completo");

    local.prepararPedido(); 
    return 0;
}