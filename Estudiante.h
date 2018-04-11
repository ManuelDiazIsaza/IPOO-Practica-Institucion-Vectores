/*
  Archivo: Estudiante.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Modificado por: Manuel Diaz cod. 1741652 y Jeffrey Rios cod. 1744831
  Fecha creación: 2018-02-09
  Fecha Última modificación: 2018-02-09
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Persona
// Responsabilidad: Administrar los datos del estudiante
// ColaboraciÃ³n: Generar el grupo de estudiantes


#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

using namespace std;


class Estudiante
{
	private:
	  int codigo;
		string nombre;
		int edad;
		double peso;
	public:
		Estudiante();
		Estudiante(int codigo, string nombre, int edad, double peso );
		~Estudiante();
		void setCodigo(int codigo);
		int getCodigo();
		void setNombre(string nombre);
		string getNombre();
		void setEdad(int edad);
		int getEdad();
		void setPeso(double peso);
		double getPeso();
};

#endif
