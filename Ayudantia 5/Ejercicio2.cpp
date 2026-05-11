#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<string> nombres;

    nombres.push("David");
    nombres.push("Luis");
    nombres.push("Pedro");
    nombres.push("Maria");

    while(!nombres.empty()){

        cout <<"Ultimo nombre de la pila actualmente: "<<nombres.top()<<endl;
        nombres.pop();

    }

    return 0;
}