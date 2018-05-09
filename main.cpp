//#define INF 1<<30
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include "enrutador.h"
using namespace std;

int main(){
    //Variables iniciales
    vector<Enrutador*> Nodos;
    typedef pair<Enrutador*,int> par;
    int numNodos;
    char letraNodo='A';
    cout<<"Ingrese el numero de nodos: ";
    cin>>numNodos;
    //Creación de los nodos
    for(int i=0; i<numNodos; i++,letraNodo++){
        string _nombre="Nodo ";
        _nombre+=letraNodo;
        Enrutador* enrutador=new Enrutador(_nombre);
        Nodos.push_back(enrutador);
    }
    cout<<'\n';
    //Nodos es vector<Enrutador*>, nod->Vecinos es map<Enrutador*,int>
    //Asignación de vecinos y costos de cada enrutador por parte del usuario (Cración del graph)
    int Costo;
    cout<<"Ingrese los costos de los vecinos de todos los nodos."<<endl;
    cout<<"Ingrese un negativo si no tiene enlace: "<<endl;
    for(int i=0; i<numNodos; i++){
        cout<<"    "<<Nodos[i]->nombreNodo<<':'<<endl;
        for(int j=i; j<numNodos; j++){

            if(Nodos[i]==Nodos[j]){(Nodos[i]->Vecinos).insert(par(Nodos[j],0));continue;} //El costo a sí mismo
            cout<<"\t"<<"Ingrese costo con el "<<Nodos[j]->nombreNodo<<": ";cin>>Costo;
            if(Costo<=0)continue;  //En consideración. Depende de si es favorable o no tenerlos como vecinos con costo negativo en los mapas
            (Nodos[i]->Vecinos).insert(par(Nodos[j],Costo));
            (Nodos[j]->Vecinos).insert(par(Nodos[i],Costo));
        }
    }
    cout<<'\n';
    //Imprimiendo los vecinos de todos los nodos.
    for(int i=0; i<numNodos; i++){
        Nodos[i]->imprimirNodos();
    }
    cout<<'\n';
    //Inicializando la tabla de enrutamiento para cada uno de los nodos hacia todos los nodos.
    for(int i=0; i<numNodos; i++){
        Nodos[i]->inicializarTabla(numNodos);
        for(int j=0; j<numNodos-1; j++){
        cout<<Nodos[i]->TablaEnrutamiento[j].destino<<" "<<
              Nodos[i]->TablaEnrutamiento[j].distancia<<" "<<
              Nodos[i]->TablaEnrutamiento[j].prevdestino<<endl;
        }
        cout<<'\n';
    }
    //VOY AQUI
    return 0;
}

/*
Enrutador nodoA("Nodo A");
Enrutador nodoB("Nodo B");
Enrutador nodoC("Nodo C");
Enrutador nodoD("Nodo D");

nodoA.agregarNodo(&nodoB,4);
nodoA.agregarNodo(&nodoC,10);
nodoA.imprimirNodos();

nodoB.agregarNodo(&nodoA,4);
nodoB.agregarNodo(&nodoD,1);
nodoB.imprimirNodos();

nodoC.agregarNodo(&nodoA,10);
nodoC.agregarNodo(&nodoD,2);
nodoC.imprimirNodos();

nodoD.agregarNodo(&nodoB,1);
nodoD.agregarNodo(&nodoC,2);
nodoD.imprimirNodos();

nodoA.crearTabla();

nodoA.imprimirNodosAccesibles();*/


    /*
     * cout<<"Ingrese el numero de particulas: ";
    int numeroparticulas;
    cin>>numeroparticulas;

    for(int i=0;i<numeroparticulas;i++){
        cout<<"Ingrese PX de la particula "<<i<<":";
        float PX; cin>>PX;
        cout<<"Ingrese PY de la particula "<<i<<":";
        float PY; cin>>PY;
        cout<<"Ingrese PX de la particula "<<i<<":";
        float VX; cin>>VX;
        cout<<"Ingrese PX de la particula "<<i<<":";
        float VY; cin>>VY;
        Particula* particula=new Particula(PX,PY,VX,VY);
        particulas.push_back(particula);
}*/
