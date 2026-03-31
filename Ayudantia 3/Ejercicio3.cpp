#include <iostream>
using namespace std;

class Tienda{

private:

    string nombre;
    int ventas[4];

public:

    Tienda(string n): nombre(n){

        for(int i = 0; i<4; i++){

            ventas[i] = 0;

        }

    }

    void setVenta(int indice, int valor){

        ventas[indice] = valor;

    }

    int calcularTotalVentas(){

        int total = 0;

        for(int i = 0; i<4; i++){

            total+= ventas[i];

        }

        return total;
    }

    void mostrarResumen(){

        cout<<"Ventas de la tienda: "<<nombre<<endl;
        cout<<"Total: "<<calcularTotalVentas()<<endl;

    }

};

int main(){

    Tienda tienda1("Oxxo");
    Tienda tienda2("ProntoCopec");

    tienda1.setVenta(0, 8990);
    tienda1.setVenta(1, 4000);
    tienda1.setVenta(2, 2590);
    tienda1.setVenta(3, 1290);

    tienda2.setVenta(0, 3200);
    tienda2.setVenta(1, 1890);
    tienda2.setVenta(2, 12990);
    tienda2.setVenta(3, 6500);

    tienda1.mostrarResumen();
    tienda2.mostrarResumen();

    return 0;
}