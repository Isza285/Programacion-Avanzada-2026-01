#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue<string> fila;
    fila.push("Cliente 1");
    fila.push("Cliente 2");
    fila.push("Cliente 3");
    fila.push("Cliente 4");

    while(!fila.empty()){
        cout<<"Atendiendo a: "<< fila.front()<<endl;
        cout<<"Ultimo en la fila: "<< fila.back()<<endl;
        
        fila.pop(); 
        
        if(!fila.empty()){
            cout<<"Nuevo primer cliente: "<< fila.front()<< endl;
            cout<<"---------------------------------------------"<<endl;
        }

    }

    cout << "Ya no hay mas clientes en la fila." << endl;

    return 0;
}
