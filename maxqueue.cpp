/**
 * @file maxqueue.cpp
 * @brief  Archivo de implementación del TDA MaxQueue
 * @author
 */
#include "maxqueue.h"
#include <iostream>

#include <stack>

using namespace std;

void MaxQueue::pop(){

    cola.pop();

}
void MaxQueue::push(int n){

    element e;
    e.value = n;

    int tam = cola.size();
    stack <element> aux;

    e.maximum = e.value;

    for (int i = 0; i < tam ; i++){
        aux.push(cola.top());
        cola.pop();
    }

    cola.push(e);

    for (int i=0; i < tam; i++){
        if (aux.top().maximum < cola.top().maximum){
            aux.top().maximum = cola.top().maximum;
        }
        cola.push(aux.top());
        aux.pop();
    }


}
element MaxQueue::front(){

    return cola.top();
}

element MaxQueue::back(){

    stack <element> aux;
    int tam = cola.size();
    element primero;

    //con este for volcamos la pila en otra auxiliar
    for (int i=0; i<tam; i++){
        aux.push(cola.top());
        cola.pop();
    }

    //este es el elemento que queremos devolver
    primero = aux.top();

    //volvemos a llenar la pila original
    for (int i=0; i < tam; i++){
        cola.push(aux.top());
        aux.top();
    }

    return primero;
}
bool MaxQueue::empty() const{
    return cola.empty();
}
int MaxQueue::size(){
    return cola.size();
}