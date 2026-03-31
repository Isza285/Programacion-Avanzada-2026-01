#include <iostream>
using namespace std;

class Clima{

private:

    string ciudad;
    float temperaturas[7];

public:

    Clima(string c): ciudad(c) {
        
        for(int i = 0; i<7; i++){

            temperaturas[i] = 0;

        }

    }

    void setTemperatura(int indice, float valor){

        temperaturas[indice] = valor;

    }

    float obtenerTemperaturaMax(){

        float max = -273.15;
        //Se va a suponer que la temperatura minima es posible es -273,15 (Celsius)

        for(int i = 0; i<7; i++){

            if(max < temperaturas[i]){

                max = temperaturas[i];

            }

        }

        return max;
        
    }

    void mostrarTemperaturas(){

        for(int i= 0; i<7; i++){

            cout<<"La temperatura del dia "<<i<<" Es de: "<<temperaturas[i]<<" grados"<<endl;

        }

    }

};

int main(){

    Clima elTiempo("Antofagasta");

    elTiempo.setTemperatura(0,20);
    elTiempo.setTemperatura(1,17);
    elTiempo.setTemperatura(2,15);
    elTiempo.setTemperatura(3,18);
    elTiempo.setTemperatura(4,21);
    elTiempo.setTemperatura(5,23);
    elTiempo.setTemperatura(6,26);

    elTiempo.mostrarTemperaturas();

    cout<<"La temperatura maxima es de: "<<elTiempo.obtenerTemperaturaMax()<<endl;

    return 0;
}