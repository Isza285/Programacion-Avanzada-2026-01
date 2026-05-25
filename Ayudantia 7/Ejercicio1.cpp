#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> notas;

    notas.push_back(60);
    notas.push_back(64);
    notas.push_back(54);
    notas.push_back(58);
    notas.push_back(46);

    for(int i=0; i<notas.size(); i++){

        cout<<"Nota "<<i+1<<": "<<notas[i]<<endl;


    }

    cout<<"Tamaño actual del vector: "<<notas.size()<<endl;

    notas.pop_back();

    cout<<"Nuevo tamaño del vector: "<<notas.size()<<endl;


}


