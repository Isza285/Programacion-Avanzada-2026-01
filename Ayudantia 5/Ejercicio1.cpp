#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> pila;

    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(4);

    cout<<"Ultimo elemento de la pila: "<<pila.top()<<endl;
    pila.pop();

    cout<<"Nuevo ultimo elemento de la pila: "<<pila.top()<<endl;
}