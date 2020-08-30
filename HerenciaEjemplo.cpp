#include<iostream>
#include<stdlib.h>
using namespace std;
class Persona
{
	private:
		string nombre;
		int edad;	
	public:
		Persona(string, int);
		void mostrarPersona();
		
};

class Alumno : public Persona
{
	private:
		string codigoAlumno;
		float notaFinal;
	public:
		Alumno(string, int, string, float);	
		void mostarAlumno();
};

Persona::Persona(string _nombre, int _edad)
{
	nombre = _nombre;
	edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad)
{	
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}
void Persona::mostrarPersona()
{
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl; 
}

void Alumno::mostarAlumno(){
	mostrarPersona();
	cout<<"Codigo Alumno: "<<codigoAlumno<<endl;
	cout<<"Nota Final: "<<notaFinal<<endl;
} 
int main()
{
	Alumno alumno1 ("Nick", 20, "1571846", 15.6 );
	alumno1.mostarAlumno();
	system("pause");
	return 0;
}
