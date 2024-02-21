/**
 * CopyRight F. J. Madrid-Cuevas <fjmadrid@uco.es>
 *
 * Sólo se permite el uso de este código en la docencia de las asignaturas sobre
 * Estructuras de Datos de la Universidad de Córdoba.
 *
 * Está prohibido su uso para cualquier otro objetivo.
 */
#pragma once
#include <cassert>

#include "vector2d.hpp"

// TODO: implement the interface for the proposed ADT.
template <class T>
Vector2D<T>::Vector2D(){

    set_x(0);
    set_y(0);

}

template <class T>
Vector2D<T>::Vector2D(T x, T y){

    set_x(x);
    set_y(y);

}

template <class T>
typename Vector2D<T>::Ref Vector2D<T>::create(){

    return std::make_shared<Vector2D<T>>();

}

template <class T>
typename Vector2D<T>::Ref Vector2D<T>::create(T x, T y ){

    return std::make_shared<Vector2D<T>>(x,y);

}

//