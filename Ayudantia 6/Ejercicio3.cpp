#include <iostream>
#include <stack>
using namespace std;

class Producto {
public:
    string nombre;
    int precio;
    
    Producto(string n, int p) : nombre(n), precio(p) {}

};

int main() {
    stack<Producto> inventario;

    inventario.push(Producto("PC", 800000));
    inventario.push(Producto("Mouse", 25000));
    inventario.push(Producto("Teclado", 45000));

    stack<Producto> inventarioCopia = inventario;

    while (!inventarioCopia.empty()) {

        cout << "Producto: "<<inventarioCopia.top().nombre<<endl;
        cout << "Precio: " <<inventarioCopia.top().precio <<endl;
        inventarioCopia.pop();

    }

    return 0;
}