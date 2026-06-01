#include <iostream>
#include <vector>
using namespace std;

class Pelicula {

public:
    string nombre, genero;
    int duracion;

    Pelicula(string n, string g, int d) : nombre(n), genero(g), duracion(d) {}

};

class Catalogo {

public:

    vector<Pelicula> lista;
    
    void agregarPelicula(Pelicula p){

        lista.push_back(p);

    }
    
    void mostrarPeliculas(){

        for (int i=0; i<lista.size(); i++) {

            cout<<"Pelicula: "<<lista[i].nombre << " Genero: " << lista[i].genero <<endl;

        }

    }
    
    void buscarPelicula(string nombreBuscado){

        for (auto p : lista) {//Tambien se puede utilizar acceso con [] para encontrar la pelicula

            if (p.nombre == nombreBuscado) {

                cout<<"Pelicula encontrada: " << p.nombre <<" duracion: " << p.duracion <<" min.";
                return;

            }

        }

        cout<<"Pelicula no encontrada"<<endl;

    }

};
int main(){//Añadir peliculas y utilizar metodos

    Catalogo netflix;

    netflix.agregarPelicula(Pelicula("Sherk", "Aventura", 120)); //Forma de añadir peliculas sin crear objetos previamente

    Pelicula peli1("Pelicula1", "Accion", 135);
    netflix.agregarPelicula(peli1); //Forma tipica de añadir.

    return 0;
}