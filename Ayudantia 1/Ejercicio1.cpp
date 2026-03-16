#include <iostream>
using namespace std;

int main(){

    string numero;
    cout<<"Ingrese numero: ";
    cin>>numero;
    
    string resultado = "";

    for(int i=numero.length()-1; i>=0; i--){

        resultado += numero[i];

    }

    cout<<"Resultado: "<<resultado;

    return 0;
}