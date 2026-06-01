#include <iostream>
#include <map>
#include <queue>

using namespace std;

class Banco {
public:
    map<int, queue<string>> ventanillas;
    
    void agregarCliente(int ventanilla, string nombre) {

        ventanillas[ventanilla].push(nombre);

    }
    
    void atenderCliente(int ventanilla) {

        if (!ventanillas[ventanilla].empty()){

            cout <<"Ventanilla: "<<ventanilla << " atendio a: "<< ventanillas[ventanilla].front() <<endl;
            ventanillas[ventanilla].pop();

        }

    }
    
    void mostrarEstado() {

        for (auto par : ventanillas){

            cout << "Ventanilla " << par.first << " tiene " << par.second.size() <<" clientes"<<endl;
            cout<<"Nombre de los clientes: "<<endl;

            queue<string> colaCopia = par.second;

            for(int i = 0; i<par.second.size(); i++){//Ciclo para poder mostrar los nombres de los clientes dentro de la ventanilla actual en la que esta el primer ciclo for.

                cout<<"Nombre: "<<colaCopia.front()<<endl;
                colaCopia.pop();

            }


        }
        
    }
};

int main(){ //añadir clientes y utilizar metodos.
    return 0;
}