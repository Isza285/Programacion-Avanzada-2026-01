#include <iostream>
using namespace std;

int main() {

    int numeros[5];

    for(int i= 0; i<5; i++){

        cout<<"Ingrese numero "<<i+1<<": ";
        cin>>numeros[i];

    }
    
    int max = 0;

    for(int i= 0; i<5; i++){

        if(max<numeros[i]){
            
            max = numeros[i];

        }

    }

    cout<<"Numero mayor: "<<max;   
    return 0;
}