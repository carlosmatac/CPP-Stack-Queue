/**
 * @file maxstack.h
 * @brief T.D.A MaxStack
 * Una instancia del tipo de dato abstracto maxstack nos permite almacenar un tipo de dato element en una pila mediante un contenedor subyacente de tipo cola
 * Además de esto vamos a poder saber cual es el valor más grande almacenado gracias a la implementacion de element
 * Este tipo de dato está compuesto por un valor y un máximo, ambos enteros
 * El TDA maxstack proporciona una serie de herramientas para consultar y modificar la pila
 * Para poder usar el TDA maxstack se debe incluir el fichero
 * \#include <maxstack.h>
 * @author Carlos Mata Carrillo
 * @author Buenaventura Porcel Esquivel
 * @date Octubre 2021
 */

#ifndef _MAXSTACK_H_
#define _MAXSTACK_H_

#include <queue>
#include <iostream>

using namespace std;


struct element {
    /**
     * @brief  corresponde al valor a insertar en la pila o cola
     */
    int value;
    /**
     * @brief  corresponde al máximo de los valores de los elementos de la pila o de la cola
     */
    int maximum;
    /**
     * @brief sobrecarga del operador <<, para poder mostrar por pantalla objetos del tipo element
     * @param os objeto de tipo ostream con el cual se devuelve el elemento
     * @param e objeto de tipo element que se quiere mostrar por pantalla
     * @return devuelve un elemento por pantalla
     */
     friend ostream  & operator << (ostream & os, const element & e){

        os << e.value << "," << e.maximum;

        return os;
    }
};

class MaxStack {
private:
    /**
     * @brief Contenedor de cola de tipo de dato element
     */
    queue <element> pila; //cola del tipo elemento
public:
    //Métodos publicos para el TDA stack
    /**
     * @brief Elimina el elemento más arriba de la pila
     */
    void pop();

    /**
     * @brief Añade un elemento arriba de la pila
     * @param n valor a insertar en la pila
     */
    void push(int n);

    /**
     * @brief Consulta el elemento más arriba de la pila
     * @return Devuelve el elemento más arriba de la pila
     */
    element top();

    /**
     * @brief Consulta si la pila está vacía
     * @return Devuelve true si la pila está vacía y false si hay algún elemento
     */
    bool empty() const;

    /**
     * @brief Consulta el tamaño de la pila
     * @return Devuelve el tamaño de la pila
     */
    int size();

};

#endif