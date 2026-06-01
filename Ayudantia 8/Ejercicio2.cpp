#include <iostream>
#include <queue>
using namespace std;

class Cliente {
public:

    string nombre;
    int cantidadProductos;

    Cliente(string n, int c) : nombre(n), cantidadProductos(c){}

};

class Caja {
public:

    queue<Cliente> fila;
    
    void agregarCliente(Cliente c){

        fila.push(c);
        cout << c.nombre<<" entro a la fila"<<endl;

    }
    
    void atenderCliente(){

        if (!fila.empty()){

            cout <<"Atendiendo a: "<< fila.front().nombre <<endl;
            fila.pop();

        }


    }
    
    void mostrarFila(){

        queue<Cliente> copia = fila; // Recuerden hacer copia para no borrar la cola original
        cout<< "Fila actual:"<<endl;

        while (!copia.empty()) {

            cout <<"Cliente: " << copia.front().nombre << "Productos: "<< copia.front().cantidadProductos <<endl;
            copia.pop();

        }

    }
};

int main(){//Añadir clientes y utilizar metodos.
    return 0;
}