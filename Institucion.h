/*
  Archivo: Grupo.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2018-02-09
  Fecha Última modificación: 2018-02-09
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Grupo
// Responsabilidad: Administrar un grupo de estudiantes
// ColaboraciÃ³n: NInguna

#ifndef INSTITUCION_H
#define INSTITUCION_H

#include <string>
#include <vector>
#include "Estudiante.h"
#include "Grupo.h"

using namespace std;

class Institucion
{
	private:
	  Grupo ipoo;
	public:
		Institucion();
		~Institucion();
		void interfazPpal();
		void agregarEstudiante();
		void borrarEstudiante();
		void modificarEstudiante();
		void consultarEstudiante();
		void estadisticasGrupo();
};

#endif