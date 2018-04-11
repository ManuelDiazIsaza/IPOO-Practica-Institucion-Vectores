/*
  Archivo: Institucion.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2017-08-31
  Fecha última modificación: 2017-08-31
  Versión: 0.1
  Licencia: GPL
*/

#include <iostream>
#include "Institucion.h"
using namespace std;

Institucion::Institucion()
{
  //Constructor
}


Institucion::~Institucion()
{
	//Método destructor
}


void Institucion::interfazPpal()
{
  Estudiante estudiantePrueba(1741652,"Manuel", 31, 74);
  Estudiante estudiantePrueba2(1744831,"jeffrey", 19, 80);
  ipoo.agregarEstudiante(estudiantePrueba);
  ipoo.agregarEstudiante(estudiantePrueba2);
  int op = 0;
  do{
    cout << endl << endl <<" ======== CONTROL DEL SISTEMA ======== " <<endl;
    cout << "1. Ingresar Estudiante" <<endl;
    cout << "2. Borrar Estudiante" <<endl;
    cout << "3. Modificar Estudiante" <<endl;
    cout << "4. Consultar un Estudiante " << endl;
    cout << "5. Listar Estudiantes" <<endl;
    cout << "6. Estadisticas Grupo" << endl;
    cout << "7. Salir" << endl;
    cout << "Opción : " ;
    cin >> op;
    switch(op){
      case 1: agregarEstudiante(); break;
      case 2: borrarEstudiante() ; break;
      case 3: modificarEstudiante() ; break;
      case 4: consultarEstudiante() ; break;
      case 5: ipoo.listarEstuditantes() ; break;
      case 6: estadisticasGrupo() ; break;
      default:
        if(op!=7)
            cout << endl << "=== Opcion no valida ===" << endl;
    }
  }while(op!=7);
}

void Institucion::agregarEstudiante(){
    int codigo;
	string nombre;
	int edad;
	double peso;
	
	cout << endl << " =========== AGREGAR ESTUDIANTE ===========";
	cout << endl << "Codigo ........ : " ;
	cin >> codigo;
	cout << endl << "Nombre ........ : " ;
	cin >> nombre;
	cout << endl << "Edad  ......... : " ;
	cin >> edad;
	cout << endl << "Peso .......... : " ;
	cin >> peso;
	
	Estudiante estudianteUno(codigo,nombre, edad, peso);
   
   if(ipoo.agregarEstudiante(estudianteUno))
   {
       cout << endl << "Estudiante agregado con éxito";
   } else {
       cout << endl << "Ocurrió un error";
   }
	
}

void Institucion::borrarEstudiante()
{
    int codigo;
    cout << endl << " =========== BORRAR ESTUDIANTE ===========";
    cout << endl << "Ingrese el Codigo del estudiante a borrar: " ;
    cin >> codigo;
    if( ipoo.borrarEstudiante(codigo) ){
        cout << endl << "Estudiante eliminado " << endl;
    } else {
        cout << endl << "Codigo no encontrado " << endl;
    }
}

void Institucion::modificarEstudiante()
{
    int codigo;
    int opcion;
    cout << endl << " =========== MODIFICAR ESTUDIANTE ===========";
    cout << endl << "Ingrese el Codigo del estudiante a modificar: " ;
    cin >> codigo;
    if(ipoo.buscarEstudiante(codigo)) {
        cout << endl << "1. Modificar su codigo.";
        cout << endl << "2. Modificar su nombre.";
        cout << endl << "3. Modificar su edad.";
        cout << endl << "4. Modificar su peso.";
        cin >> opcion;
    }
    else
    {
        cout << endl << "Estudiante no encontrado";
    }
    switch(opcion)
    {
        case 1:
            int codigoNuevo;
            cout << endl << "Ingrese el nuevo codigo del estudiante:";
            cin >> codigoNuevo;
        if (ipoo.modificarEstudiante(codigo,1,codigoNuevo,"",0,0)) {
            cout << endl << "Codigo modificado " << endl;
        } else {
            cout << endl << "Problema al modificar el codigo " << endl;
        }
        break;

        /*case 2:
            string nombreNuevo;
            cout << endl << "Ingrese el nuevo nombre del estudiante:";
            cin >> nombreNuevo;
            if (ipoo.modificarEstudiante(codigo,2,0,nombreNuevo,0,0)) {
                cout << endl << "Nombre modificado " << endl;
            } else {
                cout << endl << "Problema al modificar el codigo " << endl;
            }
            break;*/

        case 3:
            int edadNueva;
            cout << endl << "Ingrese la nueva edad del estudiante:";
            cin >> edadNueva;
            if (ipoo.modificarEstudiante(codigo,3,0,"",edadNueva,0)) {
                cout << endl << "Edad modificada " << endl;
            } else {
                cout << endl << "Problema al modificar la edad " << endl;
            }
            break;

        case 4:
            double peso;
            cout << endl << "Ingrese el nuevo peso del estudiante:";
            cin >> peso;
            if (ipoo.modificarEstudiante(codigo,4,0,"",0,peso)) {
                cout << endl << "Peso Modificado " << endl;
            } else {
                cout << endl << "Problema al modificar el peso " << endl;
            }
            break;

        case 5: interfazPpal(); break;
    }
}

void Institucion::consultarEstudiante()
{
    int codigo;
    cout << endl << " =========== CONSULTAR ESTUDIANTE ===========";
    cout << endl << "Ingrese el Codigo del estudiante a consultar: " ;
    cin >> codigo;
    ipoo.consultarEstudiante(codigo);
}

void Institucion::estadisticasGrupo() {

    cout << endl << " =========== ESTADISTICAS GRUPO ===========";
    ipoo.estadisticasGrupo();
}