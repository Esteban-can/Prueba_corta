#include <iostream>
# include "Persona.cpp"
using namespace std;
class propietario : persona
{
	private :
		string nit;
		double cui;
		public :
			propietario()
			{
			}
				propietario(string nom,string ape, string dire,int tel, string fn, string nt, double ci) : persona (nom,ape,dire,tel,fn)
				{
					nit= nt;
					cui = ci;
				}
				void setNombres (string nom){nombres = nom;}
				void setDireccion (string dire){direccion = dire;}
				void setTelefono (int tel){telefono = tel;}
				void setApellidos (string ape){apellidos = ape;}
				void setFechaN (string fn){fecha_nacimiento = fn;}
				void setNT(string nt){ nit= nt;}
				void setCi(double ci){cui = ci;}
				
				//get (mostrar)
		
				string getNombres(){return nombres;}
				string getApellidos(){return apellidos;}
				string getDireccion(){return direccion;}
				int getTelefono(){return telefono;}
				string getFechaN(){return fecha_nacimiento;}
			    string getNT(){return nit;}
				double getCi(){return cui;}
				
				void mostrar()
				{
					cout<< nit<<endl;
					cout<< cui<<endl;
					cout<< nombres<<endl;
					cout<< apellidos<<endl;
					cout<< direccion<<endl;
					cout<< telefono<<endl;
					cout<< fecha_nacimiento<<endl;
					
				
				}
					void agregar()
				{
					cout<< "Atributos agregados exitosamente";
					
				
				}
				
					
				
				
			
			
					
				
				
				
				
				

};		

