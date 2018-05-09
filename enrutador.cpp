#include "enrutador.h"
#include <algorithm>    // std::min_element, std::max_element
Enrutador::Enrutador(){}

Enrutador::Enrutador(string nombre){
    cout << "Enrutador " << nombre << " creado." << endl;
    this->nombreNodo = nombre;
}

void Enrutador::imprimirNodos(){
    map<Enrutador*,int>::iterator it;
    cout<<"Vecinos del "<<this->nombreNodo<<": "<<endl;
    for(it=this->Vecinos.begin(); it != this->Vecinos.end() ; ++it){
        cout<<"    - "<<it->first->nombreNodo << " con costo "<<it->second<<endl;
    }
}

void Enrutador::inicializarTabla(int n){
    int i=0;
    for(char letraNodo='A';letraNodo<n+65;i++,letraNodo++){
        this->destinos.push_back(i+65);
        this->prevdestinos.push_back('0');
        if(letraNodo==this->nombreNodo.back()) {this->distancias.push_back(0);}
        else {this->distancias.push_back(INT8_MAX);}
    }
//    int i=0;
//    for(char letraNodo='A';letraNodo<n+65;i++,letraNodo++){
//        this->TablaEnrutamiento[i].destino=letraNodo;
//        this->TablaEnrutamiento[i].prevdestino='0';
//        if(letraNodo==this->nombreNodo.back()){
//            this->TablaEnrutamiento[i].distancia=0;
//        }else{
//            this->TablaEnrutamiento[i].distancia=INF;
//        }
    //    }
}

Enrutador* Enrutador::neighborWithShortestDistance(int n){
    //Encontrando la posición del mínimo elemento (distancia más corta)
    int mini = *min_element(distancias.begin(), distancias.end());
    auto temp = find(distancias.begin(), distancias.end(), mini);
    auto index = distance(distancias.begin(), temp);
    //Encontrando la letra (nombre del nodo) correspondiente al de esa posición.
    Enrutador* VecinoConMenorDistancia;
    for(int i=0; i<n; i++){
        if(destinos[index]==Nodos[i]->nombreNodo.back()){
            VecinoConMenorDistancia=Nodos[i];
        }
    }
    return NodoActual;
}


/*
void Enrutador::crearTabla()
{
  //  this->MirarVecinos(this, 0);
}

void Enrutador::MirarVecinos(Enrutador* nodo, int costo)
{
    for(int i=0; i < nodo->listaDeNodos.size() ; i++){
        if(!nodoYaEstaAgregado(nodo->listaDeNodos[i]) && !(nodo->listaDeNodos[i] == this)){
            this->headerTabla.push_back(nodo->listaDeNodos[i]);
            this->tablaEnrutamiento.push_back(costo + nodo->listaCostos[i]);
            MirarVecinos(listaDeNodos[i], nodo->listaCostos[i]);
        }
    }
}

bool Enrutador::nodoYaEstaAgregado(Enrutador *nodo)
{
//    bool flag = false;
//    for(int i=0; i < this->headerTabla.size() ; i++){
//        if(this->headerTabla[i] == nodo){
//            flag = true;
//        }
//    }
//    return flag;
}

void Enrutador::imprimirNodosAccesibles()
{
//    cout << "A " << this->nombreNodo << " está asociados los nodos"<< endl;
//    for(int i=0; i < this->headerTabla.size() ; i++){
//        cout << "  - " << this->headerTabla[i]->nombreNodo << " costo: "<< this->tablaEnrutamiento[i] << endl;
//    }
}

*/
