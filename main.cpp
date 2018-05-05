#include <iostream>
#include <vector>
#include <algorithm>
#include "enrutador.h"
using namespace std;

int main(){
    vector<Enrutador*> Nodos;
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
    cout << "Nodos contains:"<<endl;
    for(vector<Enrutador*>::iterator it = Nodos.begin();it != Nodos.end(); ++it){
        cout << (*it)->nombreNodo <<endl;
    }
    cout<<'\n';
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
    return 0;
}




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
