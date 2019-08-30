/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Joseph Araya Moore / joedarayamo@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H

#include <string>
#include <stdlib.h>
#include <time.h>

const int MAX=100;

class Empleado{
protected:
    float id;
    std::string nombre;
    int exp;
    float salario;
    bool revision;
private:
    float modSal(const int *exp);
    void revisionAl(bool *revision);
public:
    Empleado();
    Empleado(int exp,std::string nom,float sal);
    float GetSalario();
    void SetSalario(float salario);
    void SetExp(int exp);
    int GetExp();
    void SetNombre(std::string nombre);
    std::string GetNombre();
    void SetId(float id);
    std::string mostrarDatos();
};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H
