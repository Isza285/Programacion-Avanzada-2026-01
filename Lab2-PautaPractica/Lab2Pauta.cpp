# include <iostream>
# include <string>
#include <vector>
#include <queue>
#include <map>
#include <stack>

using namespace std;

class GestorServidor{

private:

    vector<string> registroServidores;
    map<string,int> tareas;
    queue<string> tareasPendientes;
    stack<string> tareasProcesadas;

public:

    void agregarServidor(string server){

        registroServidores.push_back(server);

    }

    void agregarTarea(string nombreTarea, int tiempo){

        tareasPendientes.push(nombreTarea);
        tareas.insert({nombreTarea,tiempo}); //Metodo para insertar en un map sin utilizar []

    }

    void procesarSiguienteTarea(){

        string tarea = tareasPendientes.front();
        tareasPendientes.pop();

        int tiempo = tareas[tarea];

        cout<<"Procesando tarea: "<<tarea<<"("<<tiempo<<") ... Completada."<<endl;

        tareasProcesadas.push(tarea);
    }

    void mostrarEstado(){

        cout<<"Servidores activos:"<<endl;

        for(int i = 0; i<registroServidores.size(); i++){
            cout<<registroServidores[i]<<endl;
        }

        cout<<"Tareas pendientes en la cola: "<<tareasPendientes.size()<<endl;
        cout<<"Siguiente tarea en la cola: "<<tareasPendientes.front()<<endl;

        cout<<"Tareas completadas:"<<endl;
        stack<string> aux = tareasProcesadas;

        while(!aux.empty()){

            cout<<aux.top()<<endl;
            aux.pop();

        }

        cout<<"Registro de tiempos:"<<endl;

        for(auto i: tareas){

            cout<<i.first<<" ";
            cout<<i.second<<"ms"<<endl;

        }

    }


};


int main() {


    GestorServidor miGestor;
    // 1. Agregar servidores activos
    miGestor.agregarServidor("Servidor_Alfa");
    miGestor.agregarServidor("Servidor_Beta");
    // 2. Agregar tareas a la cola y registrar su tiempo estimado (ms)
    miGestor.agregarTarea("Procesar_Datos", 150);
    miGestor.agregarTarea("Entrenar_Modelo", 450);
    miGestor.agregarTarea("Generar_Reporte", 50);
    cout << "--- Iniciando Procesamiento ---" << endl;
    // 3. Procesar tareas de la cola y pasarlas al historial
    miGestor.procesarSiguienteTarea();
    miGestor.procesarSiguienteTarea();
    cout << "\n--- Estado Actual del Gestor ---" << endl;
    // 4. Mostrar el estado de todas las estructuras
    miGestor.mostrarEstado();
    return 0;

}