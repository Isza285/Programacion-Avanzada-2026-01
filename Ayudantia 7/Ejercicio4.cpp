#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> numeros;

    numeros.push_back(1);
    numeros.push_back(2);
    numeros.push_back(3);
    numeros.push_back(4);
    numeros.push_back(5);

    int x;

    cout<<"Ingrese un numero a buscar: ";
    cin>>x;

    for(int i = 0; i<numeros.size(); i++){

        if(numeros[i] == x){
            cout<<"El numero "<<x<<" se encuentra dentro del vector.";
            return 0;
        }

    }

    cout<<"No se ha encontrado el numero en el vector.";
    return 0;

}