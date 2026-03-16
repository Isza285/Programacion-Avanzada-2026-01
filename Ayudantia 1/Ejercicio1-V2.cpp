#include <iostream>
using namespace std;

int main() {

    //Ejemplo de un numero con una cantidad de digitos predefinida
    //En este caso con un numero de 4 digitos

    int numero;
    cout<<"Ingresar numero: ";
    cin>>numero;

    int resultado[4];

    resultado[3] = numero%10;
    resultado[2] = (numero/10)%10;
    resultado[1] = (numero/100)%10;
    resultado[0] = (numero/1000);

    cout<<"Resultado: ";

    for(int i=3; i>=0; i--){

        cout<<resultado[i];

    }

    return 0;
}