/**
 * @file maxstack.cpp
 * @brief  Archivo de implementación del TDA MaxStack
 * @author Carlos Mata Carrillo y Buenaventura Porcel Esquivel
 */

#include <queue>
#include <iostream>
#include "maxstack.h"

using namespace std;



//elimina el elemento arriba de la pila
void MaxStack::pop() {

    queue<element> aux;
    int tam = pila.size();

    for (int i=0; i<tam-1; i++){
        aux.push(pila.front());
        pila.pop();
    }
    pila = aux;

}

//añadimos un elemento
void MaxStack::push(int n) {
   //declaramos el elemento
    element e;
    e.value = n;

    if (pila.empty()){
        e.maximum = e.value;
    }
    else if (e.value > pila.back().maximum){
        e.maximum = e.value;
    }
    else {
        e.maximum = pila.back().maximum;
    }
    pila.push(e);
}

element MaxStack::top() {
    return pila.back();

}

bool MaxStack::empty() const {
    return pila.empty();

}

int MaxStack::size() {
    return pila.size();
}
