#include <iostream>
using namespace std;

class Vehiculo{
    
public:

    string marca;
    
    Vehiculo(string m): marca(m) {}
    
    void mostrarTipo(){
        cout<<"Soy un vehículo de marca: "<<marca<<endl;
    }
    
};

class Auto: public Vehiculo{
    
public:

    Auto(string m): Vehiculo(m) {}
    
    void mostrarTipo(){
        cout<<"Soy un auto de marca: "<<marca<<endl;
    }
  
};

int main(){
    
   Auto miAuto("Toyota");
   miAuto.mostrarTipo();
   
   //Ejemplo con Vehiculo
   
   Vehiculo miVehiculo("Honda");
   miVehiculo.mostrarTipo();
   
    return 0;
}