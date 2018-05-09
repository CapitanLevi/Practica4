#ifndef ENRUTADOR_H
#define ENRUTADOR_H
//#define INF 1<<30
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Enrutador{
public:
    //Constructor
    Enrutador();
    Enrutador(string nombre);
    //Atributos
    string nombreNodo;
    map<Enrutador*,int> Vecinos;
    struct Enrutamiento{
        char destino;
        int distancia;
        char prevdestino;
    }TablaEnrutamiento[10];

    // Métodos
    void imprimirNodos();
    void inicializarTabla(int);


    void crearTabla();
    void MirarVecinos(Enrutador* nodo, int costo);
    bool nodoYaEstaAgregado(Enrutador* nodo);
    void imprimirNodosAccesibles();
};


#endif // ENRUTADOR_H
