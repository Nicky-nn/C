#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Animal
{
	private:
		string nombre;
		int edad;	
	public:
		Animal(string, int);
		void mostrarAnimal();
		
};

class Reptil : public Animal
{
	private:
		string codigoReptil;
		string peso;
	public:
		Reptil(string, int, string, string);	
		void mostarReptil();
};

class Serpient : public Reptil
{
	private:
		string Descripcion;
		string Venenoso;
	public:
		Serpient(string, int, string, string, string, string);
		void mostrarSerpient();	
};

class Mamifero : public Animal
{
	private:
		string amamanta;
		string cpelo;
	public:
		Mamifero(string, int, string, string);	
		void mostrarMamifero();
};

class Caballo : public Mamifero
{
	private:
		string Velocidad;
		string Altura;
	public:
		Caballo(string, int, string, string, string, string);
		void mostrarCaballo();	
};

class Anfibio : public Animal
{
	private:
		string clase;
		string superclase;
	public:
		Anfibio(string, int, string, string);	
		void mostrarAnfibio();
};

class Rana : public Anfibio
{
	private:
		string Reino;
		string Filo;
	public:
		Rana(string, int, string, string, string, string);
		void mostrarRana();	
};


Animal::Animal(string _nombre, int _edad)
{
	nombre = _nombre;
	edad = _edad;
}

//********REPTIL*******//

Reptil::Reptil(string _nombre, int _edad, string _codigoReptil, string _peso) : Animal(_nombre, _edad)
{	
	codigoReptil = _codigoReptil;
	peso = _peso;
}

Serpient::Serpient(string _nombre, int _edad, string _codigoReptil, string _peso, string _Descripcion, string _Venenoso) : Reptil(_nombre, _edad, _codigoReptil, _peso)
{
	Descripcion = _Descripcion;
	Venenoso = _Venenoso;
}

//*****MAMIFERO******//
Mamifero::Mamifero(string _nombre, int _edad, string _amamanta, string _cpelo) : Animal(_nombre, _edad)
{	
	amamanta = _amamanta;
	cpelo = _cpelo;
}

Caballo::Caballo(string _nombre, int _edad, string _amamanta, string _cpelo, string _Velocidad, string _Altura) : Mamifero(_nombre, _edad, _amamanta, _cpelo)
{
	Velocidad = _Velocidad;
	Altura = _Altura;
}

//*****ANFIBIO*****//

Anfibio::Anfibio(string _nombre, int _edad, string _clase, string _superclase) : Animal(_nombre, _edad)
{	
	clase = _clase;
	superclase = _superclase;
}

Rana::Rana(string _nombre, int _edad, string _clase, string _superclase, string _Reino, string _Filo) : Anfibio(_nombre, _edad, _clase, _superclase)
{
	Reino = _Reino;
	Filo = _Filo;
}
void Animal::mostrarAnimal()
{
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl; 
}

void Reptil::mostarReptil(){
	mostrarAnimal();
	cout<<"Codigo Reptil: "<<codigoReptil<<endl;
	cout<<"Peso: "<<peso<<endl;
} 

void Serpient::mostrarSerpient()
{
	mostarReptil();
	cout<<"Descripcion: "<<Descripcion<<endl;
	cout<<"Peso: "<<Venenoso<<endl;
}


void Mamifero::mostrarMamifero(){
	mostrarAnimal();
	cout<<"Amamanta: "<<amamanta<<endl;
	cout<<"Color de Pelo: "<<cpelo<<endl;
} 

void Caballo::mostrarCaballo()
{
	mostrarMamifero();
	cout<<"Velocidad: "<<Velocidad<<endl;
	cout<<"Altura: "<<Altura<<endl;
}

void Anfibio::mostrarAnfibio(){
	mostrarAnimal();
	cout<<"Clase: "<<clase<<endl;
	cout<<"Super Clase: "<<superclase<<endl;
} 

void Rana::mostrarRana()
{
	mostrarAnfibio();
	cout<<"Reino: "<<Reino<<endl;
	cout<<"Filo: "<<Filo<<endl;
}

int main()
{
	system("color 0E");
	cout<<"##  ##    ####    #####   ### ###"<<endl;
	cout<<"### ###  ######  #######   ## ###"<<endl;
	cout<<"### ###   ###   ### # #    #####"<<endl;
	cout<<"#### ##   ###   ##         #####"<<endl;
	cout<<"## ####   ###   ##         ####"<<endl;
	cout<<"### ###   ###    ### # #   ######"<<endl;
	cout<<"### ###  #####   #######  ### ###"<<endl;
	cout<<" ##  ##  #####    #####   ### ###"<<endl;
	
	
	
	cout<<"-----------------------------------"<<endl;

	
	cout<<"**********REPTIL***********"<<endl;
	Serpient rep1("Locku", 20, "1571846", "15.6", "Ninguno", "Venenoso");
	rep1.mostrarSerpient();
	
	cout<<"***********MAMIFERO***********"<<endl;
	Caballo cab1("Suertudo",10,"NO","Cafe","80km/h","1.8 m");
	cab1.mostrarCaballo();
	
	cout<<"***********ANFIBIO************"<<endl;
	Rana ran1("Pepe", 2 ,"Amphibia", "Batrachomorpha", "Animalia", "Chordata");
	ran1.mostrarRana();
	
	system("pause");
	return 0;
}
