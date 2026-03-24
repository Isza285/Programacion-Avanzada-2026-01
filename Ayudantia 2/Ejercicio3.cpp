#include <iostream>
using namespace std;

class Motor{

public:

    int potencia;

    Motor(int p){
        potencia = p;
    }

    int getPotencia(){return potencia;}
    void setPotencia(int p){
        potencia = p;
    }
};

class Auto{

public:

    string marca;
    int año;
    Motor motor;

    Auto(string m, int a, Motor mo): marca(m), año(a), motor(mo){}

    string getMarca(){return marca;}
    int getAño(){return año;}
    Motor getMotor(){return motor;}

    void setMarca(string m){
        marca = m;
    }
    void setAño(int a){
        año = a;
    }
    void setMotor(Motor mo){
        motor = mo;
    }

    void mostrarInformacion(){
        cout<<"Marca: "<<marca<<endl;
        cout<<"Año: "<<año<<endl;
        cout<<"Potencia: "<<motor.getPotencia()<<endl;

    }

};

int main(){

    Motor v10(900);

    Auto R25("Renault", 2005, v10);
    //Ingresamos el objeto "v10", dentro del objeto "R25" al momento de crear el objeto.

    R25.mostrarInformacion();
    
    return 0;
}