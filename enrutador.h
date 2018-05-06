#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include <iostream>
#include <vector>

using namespace std;

class Enrutador
{
public:
    //Constructor
    Enrutador();
    Enrutador(string nombre);
    //Atributos
    string nombreNodo;
    vector<Enrutador*> headerTabla;
    vector<Enrutador*> listaDeNodos;
    vector<int> listaCostos;
    vector<int> tablaEnrutamiento;
    // Métodos
    void agregarNodo(Enrutador* nodo, int costo);
    void imprimirNodos();
    void crearTabla();
    void MirarVecinos(Enrutador* nodo, int costo);
    bool nodoYaEstaAgregado(Enrutador* nodo);
    void imprimirNodosAccesibles();
};


#endif // ENRUTADOR_H
