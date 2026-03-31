#include <iostream>
using namespace std;

class Producto{
   
private:

    string nombre;
    int stock[3];
   
public:

    Producto(string n){
        for(int i = 0; i<3; i++){
           
            stock[i] = 0;
           
        }
    }
   
    void setStock(int indice, int valor){
       
        stock[indice] = valor;
       
    }
   
    void mostrarStock(){
       
        for(int i = 0; i<3; i++){
           
            cout<<"Hay "<<stock[i]<<" Unidades de producto en la pos "<<i<<endl;
           
        }
       
    }
   
};

int main(){
   
    Producto lapices("Lapiz");
   
    lapices.setStock(0,20);
    lapices.setStock(1,10);    
    lapices.setStock(2,0);
   
    lapices.mostrarStock();
   
    return 0;
}