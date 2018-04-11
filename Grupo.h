/*
  Archivo: Grupo.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2018-02-09
  Modificado por: Manuel Diaz cod. 1741652 y Jeffrey Rios cod. 1744831
  Fecha Última modificación: 2018-02-09
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Grupo
// Responsabilidad: Administrar un grupo de estudiantes
// ColaboraciÃ³n: NInguna

#ifndef GRUPO_H
#define GRUPO_H

#include <string>
#include <vector>
#include "Estudiante.h"

using namespace std;


class Grupo
{
	private:
		vector<Estudiante> grupo;
		int ultimo;
	public:
		Grupo();
		~Grupo();

		bool agregarEstudiante(Estudiante estudiante);
		bool buscarEstudiante(int codigo);
		void listarEstuditantes();
		bool borrarEstudiante(int codigo);
		bool modificarEstudiante(int codigo, int opcion, int codigoNuevo, string nombre, int edad, double peso);
		void consultarEstudiante(int codigo);
		void estadisticasGrupo();
};

#endif