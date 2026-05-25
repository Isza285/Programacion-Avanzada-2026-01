#include <iostream>
#include <map>
using namespace std;

int main(){

    map<string,int> asignaturas;

    asignaturas["Calculo"] = 50;
    asignaturas["Programacion"] = 60;
    asignaturas["Mecanica"] = 57;

    for(auto i: asignaturas){

        cout<<"Asignatura: "<<i.first<<endl;
        cout<<"Nota: "<<i.second<<endl;

    }

    asignaturas.erase("Calculo");
    cout<<"Nuevo map"<<endl;

    for(auto i: asignaturas){

        cout<<"Asignatura: "<<i.first<<endl;
        cout<<"Nota: "<<i.second<<endl;

    }
}