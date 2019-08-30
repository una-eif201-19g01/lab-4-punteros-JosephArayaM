/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Joseph Araya Moore / joedarayamo@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include "Empleado.h"

Empleado::Empleado(){
    exp = 0;
    nombre = " ";
    salario = 0.0;
    id= std::rand() % MAX;
}

Empleado::Empleado(int ex, std::string nom, float sal){
    exp = ex;
    nombre = nom;
    salario = sal;
    id= std::rand() % MAX;
}

float Empleado::modSal(const int *exp){
    float aumento=0;
    if(exp >= 1 and exp < 3){
        aumento = salario * 0.02;
        return salario + (aumento * exp);
    }else
        if(exp >= 1 and exp < 3)
            aumento = salario * 0.05;
            return salario + (aumento * exp);
}

void Empleado::revisionAl(bool *revision){
    if(rand() % 2 == 0)
        *revision = true;
    else
        *revision = false;
}

std::string Empleado::mostrarDatos(Empleado empleado1){
    std::stringstream s;
    s<<"* Empleado # ["<<id<<"]"<<std::endl;
    s<<"       * Nombre ["<<nombre<<"]"<<std::endl;
    s<<"       * annos de experiencia ["<<exp<<"]"<<std::endl;
    s<<"       * Salario inicial ["<<salario<<"]"<<std::endl;
    s<<"       * Salario acumulado ["<<empleado1.modSal(empleado1.GetExp())<<"]"<<std::endl;
    if(revisionAl(*revision)== true){
        s<<"   * Necesita revision [si]"<<std::endl;
    }else{
        s<<"   * Necesita revision [no]"<<std::endl;}
    s<<std::endl;
    return s;
}

void Empleado::SetSalario(float salario) {
    this->salario = salario;
}

float Empleado::GetSalario(){
    return salario;
}

void Empleado::SetExp(int exp) {
    this->exp = exp;
}

int Empleado::GetExp(){
    return exp;
}

void Empleado::SetNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Empleado::GetNombre(){
    return nombre;
}

void Empleado::SetId(float id) {
    this->id = id;
}
