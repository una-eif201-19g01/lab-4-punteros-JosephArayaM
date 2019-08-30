/*
 * =====================================================================================
 *
 *       Filename:  Main.cpp
 *
 *    Description:  Implementación del main
 *
 *        Created:  2019-08-22
 *
 *         Author:  Joseph Araya Moore / joedarayamo@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>
#include "Empleado.h"

using namespace std;

int main() {
    Empleado empleado[3];

    empleado[0].SetNombre("Mike");
    empleado[0].SetExp(2);
    empleado[0].SetSalario(1200000);
    
    empleado[1].SetNombre("Sebastian");
    empleado[1].SetExp(3);
    empleado[1].SetSalario(1600000);
    
    empleado[2].SetNombre("Carolina");
    empleado[2].SetExp(8);
    empleado[2].SetSalario(1800000);
    
    empleado[3].SetNombre("Emma");
    empleado[3].SetExp(1);
    empleado[3].SetSalario(800000);
    
    for(int cont= 0; cont< 4; cont++){
        cout<<empleado[cont].mostrarDatos()<<endl;
    }

    return 0;
}