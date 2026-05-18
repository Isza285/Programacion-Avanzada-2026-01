#include <iostream>
#include <stack>
using namespace std;

class Biblioteca{
public:

    stack<string> libros;

    void agregarLibro(string nombre){
        
        libros.push(nombre);
        cout<<"Libro añadido: "<<nombre<<endl;

    }

    void mostrarLibros(){

        stack<string> librosCopia = libros;

        while(!librosCopia.empty()){

            cout<<"Libro: "<<librosCopia.top()<<endl;
            librosCopia.pop();

        }

    }

};

int main() {
    Biblioteca miBiblio;
    miBiblio.agregarLibro("Libro1");
    miBiblio.agregarLibro("Libro2");
    miBiblio.agregarLibro("Libro3");

    miBiblio.mostrarLibros();
    return 0;
}
