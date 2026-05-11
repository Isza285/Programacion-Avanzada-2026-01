#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> cola1;
    cola1.push(10);
    cola1.push(20);
    cola1.push(30);

    queue<int> cola2;
    cola2.push(40);
    cola2.push(50);
    cola2.push(60);

    queue<int> colaFinal;

    while(!cola1.empty()){

        colaFinal.push(cola1.front());
        cola1.pop();

    }

    while(!cola2.empty()){

        colaFinal.push(cola2.front());
        cola2.pop();

    }

    cout<< "Cola final: "<<endl;

    while(!colaFinal.empty()){

        cout<<colaFinal.front()<<endl;
        colaFinal.pop();

    }

    return 0;
}