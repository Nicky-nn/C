#include<iostream>
#include<stdlib.h>
#include "memory.h"
using namespace std;
class Animal
{
	private:
		string nombre;
		int edad;
		int tiempoDeVida;
		string genero;	
	public:
		Animal(string, int, int, int);
		void mostrarAnimal();
		
};


class Reptil : public Animal
{
	private: 
		string confirmar;	
	public:
		Reptil(string, int, int, int, string);
		void mostrarConfirmacion();
};

/*class Alumno : public Persona
{
	private:
		string codigoAlumno;
		float notaFinal;
	public:
		Alumno(string, int, string, float);	
		void mostarAlumno();
};*/


class Serpiente : public Reptil 
{
	private:
		string tipoDeSerpiente;
	public:
		Serpiente(string, int, int, int, string, string);
		void mostrarSerpiente();
};

Animal::Animal(string _nombre, int _edad, int _tiempoDeVida, string _genero)
{
	nombre = _nombre;
	edad = _edad;
	tiempoDeVida = _tiempoDeVida;
	genero = _genero;
}

Reptil::Reptil(string _nombre, int _edad, int _tiempoDeVida, string _genero, string _confirma) : Animal(_nombre, _edad, _tiempoDeVida, _genero)
{
	confirmar = _confirma;
}

Serpiente::Serpiente(string _nombre, int _edad, int _tiempoDeVida, string _genero, string _confirma, string _tipoDeSerpiente) : Reptil(_nombre, _edad, _tiempoDeVida,_genero,_confirma)
{
	tipoDeSerpiente = _tipoDeSerpiente;
}


void Animal::mostrarAnimal()
{
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl; 
	cout<<"Tiempo de Vida: "<<edad<<endl; 
	cout<<"Genero: "<<edad<<endl; 
}
void Reptil::mostrarConfirmacion()
{
	mostrarAnimal();
	cout<<"Su Confirmacion es: "<<nombre<<endl;
}
void Serpiente::mostrarSerpiente()
{
	mostrarSerpiente();
	cout<<"Tipo Serpiente: "<<edad<<endl; 
}


int main()
{
	/*Alumno alumno1 ("Nick", 20, "1571846", 15.6 );
	alumno1.mostarAlumno();*/
	
	Serpiente sep1("Loki", 10, "Maculino", "Confrimar", "Venenosa");
	sep1.mostrarSerpiente();
	system("pause");
	return 0;
}
