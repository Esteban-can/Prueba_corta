#include <iostream>
#include "Propietario.cpp"
using namespace std;
main ()
{
	string nit,nombre,apellido,direccion,fechan;
	int telefono;
	double cui;
	cout << "Ingrese Nit: ";
	cin >> nit;
	cout << "Ingrese Nombres: ";
	cin >> nombre;
	cout << "Ingrese Apellidos: ";
	cin >> apellido;
	cout << "Ingrese Direccion: ";
	cin >> direccion;
	cout << "Ingrese Telefono: ";
	cin >> telefono;
	cout << "Ingrese Fecha nacimiento: ";
	cin >> fechan;
	cout << "Ingrese CUI: ";
	cin >> cui;
	
 propietario c = 	propietario(nombre, apellido,  direccion, telefono,  fechan,nit,cui);
	cout<< "Datos del propietario: " << c.getNT()<<","<<c.getNombres()<<","<<c.getApellidos()<<","<<c.getDireccion()<<","<<c.getTelefono()<<","<<c.getFechaN()<<c.getCi()<<endl;
	c.agregar();

}