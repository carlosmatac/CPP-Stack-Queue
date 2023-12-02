/**
 * @file maxqueue.h
 * @brief T.D.A MaxQueue
 * Una instancia del tipo de dato abstracto maxqueue nos permite almacenar un tipo de dato element en una cola mediante un contenedor subyacente de tipo pila
 * Además de esto vamos a poder saber cual es el valor más grande almacenado gracias a la implementacion de element
 * Este tipo de dato está compuesto por un valor y un máximo, ambos enteros
 * El TDA maxqueue proporciona una serie de herramientas para consultar y modificar la cola
 * Para poder usar el TDA maxqueue se debe incluir el fichero
 * \#include <maxqueue.h>
 * @author Carlos Mata Carrillo
 * @author Buenaventura Porcel Esquivel
 * @date Octubre 2021
 */
#ifndef _MAXQUEUE_H_
#define _MAXQUEUE_H_

#include <stack>
#include <iostream>

using namespace std;


struct element {
    int value;
    int maximum;
    friend ostream  & operator << (ostream & os, const element & e){

        os << e.value << "," << e.maximum;

        return os;
    }
};

class MaxQueue {
private:
    /**
     * @brief contenedor de pila del tipo de dato element
     */
    stack <element> cola; //cola del tipo elemento
public:
    //Métodos publicos para el TDA stack
    /**
     * @brief Elimina el elemento del principio de la cola
     */
    void pop();

    /**
     * @brief Añade un elemento al final de la cola
     * @param n Valor a insertar en la cola
     */
    void push(int n);

    /**
     * @brief Consulta el primer elemento de la cola
     * @return Devuelve el primer elemento de la cola
     */
    element front();

    /**
     * @brief Consulta el elemento
     * @return Devuelve el último elemento de la cola
     */
    element back();



    /**
     * @brief Consulta si la cola está vacía
     * @return Devuelve true si la cola está vacía y false si hay algún elemento
     */
    bool empty() const;

    /**
     * @brief Consulta el tamaño de la cola
     * @return Devuelve el tamaño de la cola
     */
    int size();

};

#endif