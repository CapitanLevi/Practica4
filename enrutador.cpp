#define INF 1<<30
#include "enrutador.h"
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
    for(int i=0; i<n; i++){
        this->destinos[i]=i+65;
        this->prevdestinos[i]='0';
        if(letraNodo==this->nombreNodo.back()){
            this->distancias[i]=0;
        }else{
            this->distancias[i]=INF;
            }
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

void Enrutador::shortestDistance(
        )
{
    for(int i=0; i<sizeof(this->TablaEnrutamiento);i++){
        if(TablaEnrutamiento[i].distancia<distanciaActual);
    }
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
