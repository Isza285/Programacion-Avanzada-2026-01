#include <iostream>
using namespace std;

int main() {

    string numero;
    cout<<"Ingrese numero: ";
    cin>>numero;

    for(int i = 0; i<numero.length(); i++){

        if(numero[i]!=numero[numero.length()-i-1]){

            cout<<"No es palindromo";
            return 0;

        }

    }

    cout<<"Es palindromo";

    return 0;
}