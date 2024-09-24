#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>
using namespace std;

#ifndef DUENIO_H_INCLUDED
#define DUENIO_H_INCLUDED



class Duenio
{
public:
    Duenio(){};

    void cargar(){
    std::string apellido;
    std::string nombre;
    std::string dni;
    std::string celu;

    cout<<"Ingrese Datos del duenio:"<<endl;
    cout<<endl;

     cout<<"Apellido: "<<endl;
     getline(cin, apellido);
     cin.ignore();


    cout<<"Nombre:"<<endl;
      cin.ignore();
      getline(cin,nombre);

    cout<<"Dni:"<<endl;
      cin.ignore();
    getline(cin,dni);

    cout<<"Celular:"<<endl;
    cin.ignore();
    getline(cin,celu);

    }


protected:
private:
    char _apellido[50];
    char _nombre[50];
    char _dni[12];
    char _celular[15];

    std::string get_apellido();
    std::string get_nombre();
    std::string get_dni();
    std::string get_celu();

    void set_apellido(std::string);
    void set_nombre(std::string);
    void set_dni(std::string);
    void set_celu(std::string);




};


#endif // DUENIO_H_INCLUDED
