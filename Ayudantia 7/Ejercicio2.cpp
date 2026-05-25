#include <iostream>
#include <map>
using namespace std;

int main(){

    map<string,string> personas;

    personas["Claudio"] = "Viña del Mar";
    personas["Diego"] = "Antofagasta";
    personas["Hugo"] = "Talca";

    for(auto i: personas){

        cout<<"Nombre: "<<i.first<<endl;
        cout<<"Ciudad: "<<i.second<<endl;


    }


}