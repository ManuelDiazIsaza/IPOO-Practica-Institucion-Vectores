/*
  Archivo: Estudiante.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2017-08-31
  Fecha última modificación: 2017-08-31
  Versión: 0.1
  Licencia: GPL
*/

#include "Estudiante.h"

Estudiante::Estudiante()
{
	nombre = "";
	edad = 0;
	peso = 0;
}

Estudiante::Estudiante(int codigo, string nombre, int edad, double peso)
{
	this -> codigo = codigo;
	this -> nombre = nombre;
	this -> edad = edad;
	this -> peso = peso;
}

Estudiante::~Estudiante()
{
	//Método destructor
}

void Estudiante:: setCodigo(int codigo){
	this -> codigo = codigo;
}

int Estudiante::getCodigo(){
	return codigo;
}

void Estudiante:: setNombre(string nombre){
	this -> nombre = nombre;
}

string Estudiante::getNombre(){
	return nombre;
}

void Estudiante::setEdad(int edad){
	this -> edad = edad;
}

int Estudiante::getEdad(){
	return edad;
}


void Estudiante::setPeso(double peso){
	this -> peso = peso;
}

double Estudiante::getPeso(){
	return peso;
}
