/*
  Archivo: Grupo.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2017-08-31
  Fecha última modificación: 2017-08-31
  Versión: 0.1
  Licencia: GPL
*/

#include "Grupo.h"
#include <iomanip>
#include <iostream>

using namespace std;

Grupo::Grupo()
{

}

Grupo::~Grupo()
{
	//Método destructor
}

bool Grupo::agregarEstudiante(Estudiante estudiante)
{
  int codigo = estudiante.getCodigo();
  if(!buscarEstudiante(codigo)){
    grupo.push_back(estudiante)  ;
    return true;
  } else {
    return false;
  }
}

bool Grupo::buscarEstudiante(int codigo)
{
  bool resultado = false;
  int tamano = grupo.size();
  for (int i = 0 ; i < tamano; i++){
    if(grupo[i].getCodigo() == codigo){
      resultado = true;
    }
  }
  return resultado;
}


void Grupo::listarEstuditantes()
{
    int total = this -> grupo.size();
    int longitud = 0;
    string nombre = "";
    cout << "================== LISTADO DE ESTUDIANTES ==================" << endl;
    cout << endl << "Estudiante" << setw(20) << "Codigo" << setw(15) << "Edad" << setw(15) << "Peso" << endl;
    cout << "============================================================ " << endl;
    for(int i = 0 ; i < total; i++){
        nombre = grupo[i].getNombre();
        longitud = nombre.length();
        cout << nombre.append(20-longitud,'.') << " : " <<setw(5) ;
        cout << grupo[i].getCodigo()  <<setw(15) ;
        cout << grupo[i].getEdad()  <<setw(15) ;
        cout << grupo[i].getPeso()  << endl;
    }
}

bool Grupo::borrarEstudiante(int codigo)
{
    vector<Estudiante>::iterator it;
    vector<Estudiante>::iterator borrar;
    it = grupo.begin(); //el iterador apunta al inicio
    bool resultado = false;;
    for(it = grupo.begin(); it != grupo.end(); it++){
        if ( (*it).getCodigo() == codigo  ){
            resultado = true;
            borrar = it;
            it = grupo.end()-1;
        }
    }
    if(resultado){
        grupo.erase(borrar); //borra el elemento apuntado en este lugar
    }
    return resultado ;
}

bool Grupo::modificarEstudiante(int codigo, int opcion, int codigoNuevo, string nombreNuevo, int edad, double peso)
{
    vector<Estudiante>::iterator it;
    vector<Estudiante>::iterator borrar;
    it = grupo.begin(); //el iterador apunta al inicio
    bool resultado = false;;
    for(it = grupo.begin(); it != grupo.end(); it++){
        if ( (*it).getCodigo() == codigo  ){
            resultado = true;
            borrar = it;
            it = grupo.end()-1;
        }
    }
    if(resultado && opcion == 1)
    {
        (*borrar).setCodigo(codigoNuevo);
    }
    else if(resultado && opcion == 2 )
    {
        (*borrar).setNombre(nombreNuevo);
    }
    else if(resultado && opcion == 3 )
    {
        (*borrar).setEdad(edad);
    }
    else if(resultado && opcion == 4 )
    {
        (*borrar).setPeso(peso);
    }
    return resultado ;
}

void Grupo::consultarEstudiante(int codigo)
{
    vector<Estudiante>::iterator it;
    vector<Estudiante>::iterator borrar;
    it = grupo.begin(); //el iterador apunta al inicio
    bool resultado = false;;
    for(it = grupo.begin(); it != grupo.end(); it++){
        if ( (*it).getCodigo() == codigo  ){
            resultado = true;
            borrar = it;
            it = grupo.end()-1;
        }
    }
    if(resultado){
        cout << "================== LISTADO DE ESTUDIANTES ==================" << endl;
        cout << endl << "Estudiante" << setw(20) << "Codigo" << setw(15) << "Edad" << setw(15) << "Peso" << endl;
        cout << "============================================================ " << endl;
        int longitud = (*borrar).getNombre().length();
        cout << (*borrar).getNombre().append(20-longitud,'.') << " : " <<setw(5) ;
        cout << (*borrar).getCodigo()  <<setw(15) ;
        cout << (*borrar).getEdad()  <<setw(15) ;
        cout << (*borrar).getPeso()  << endl;
    }
}

void Grupo::estadisticasGrupo() {

    int tamano = grupo.size();
    int edades = 0;
    double pesos = 0;

    double promPesos = 0;
    double promEdades = 0;

    for (int i = 0 ; i < tamano; i++){

         edades += grupo[i].getEdad();
         pesos += grupo[i].getPeso();
    }

    promPesos = pesos / tamano;
    promEdades = edades / tamano;

    cout << endl << "EL promedio de los pesos del grupo es: " << promPesos;
    cout << endl << "EL promedio de las edades del grupo es: " <<promEdades;

}