#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include <iostream>
#include <vector>
#include <map>
#include <limits>
using namespace std;

class Enrutador{
public:
    //Constructor
    Enrutador();
    Enrutador(string nombre);
    //Atributos
    string nombreNodo;
    map<Enrutador*,int> Vecinos;
    vector<char> destinos;
    vector<int> distancias;
    vector<char> prevdestinos;

//    struct Enrutamiento{
//        char destino;
//        int distancia;
//        char prevdestino;
//    }TablaEnrutamiento[10];

    // Métodos
    void imprimirNodos();
    void inicializarTabla(int);
    void smallestDistance();    //Puede cambiar el tipo de retorno

    void crearTabla();
    void MirarVecinos(Enrutador* nodo, int costo);
    bool nodoYaEstaAgregado(Enrutador* nodo);
    void imprimirNodosAccesibles();
};


#endif // ENRUTADOR_H
