#include <iostream>
using namespace std;

class Vehiculo{
    
public:

    string marca;
    
    Vehiculo(string m): marca(m) {}
    
    virtual void mostrarTipo(){
        cout<<"Soy un vehículo de marca: "<<marca<<endl;
    }
    
};

class Auto: public Vehiculo{
    
public:

    Auto(string m): Vehiculo(m) {}
    
    void mostrarTipo() override{
        cout<<"Soy un auto de marca: "<<marca<<endl;
    }
  
};

int main(){
    
    Vehiculo* miAuto = new Auto("Toyota");
    miAuto->mostrarTipo();
    //Output sin virtual: Soy un vehículo de marca: Toyota

    return 0;
}