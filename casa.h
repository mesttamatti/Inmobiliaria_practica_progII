#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

#ifndef CASA_H_INCLUDED
#define CASA_H_INCLUDED


#include "Duenio.h"
#include "precio.h"


class Casa
{
    protected:
    private:
    int _codigo;
    char _calles[50];
    char _numero[50];
    char _localidad[50];

    int _antiguedad;
    float _superficie_total;
    float _superficie_cubierta;
    int _habitaciones;

    Precio precios;
    Duenio duenio;

public:
    Casa(){};

    int get_codigo( );
    std:: string get_calle();
    std:: string get_numero();
    std:: string get_localidad();
    int get_antiguedad();
    float get_super_total();
    float get_super_cubierta();
    int get_habitaciones();



    void set_codigo(int);
    void set_calle(std::string);
    void set_numero(std::string);
    void set_localidad(std::string);
    void set_antiguedad(int);
    void set_super_total(float);
    void set_super_cubierta(float);
    void set_habitaciones(int);



    void mostrar(){}

    void cargar(){
    int codigo;
    std::string calles;
    std:: string numero;
    std::string localidad;
   /* int antiguedad;
    float superficie_total;
    float superficie_cubierta;
    int habitaciones;
*/


    cout<<"Ingrese Datos de la Casa:"<<endl;
    cout<<endl;

    cout<<"Codigo:"<<endl;
    cin>>this->_codigo;


    cout<<"Calle:"<<endl;
    cin.ignore();
    getline(cin, calles);
    strcpy(_calles, calles.c_str());


    cout<<"Numero:"<<endl;
    cin.ignore();
    getline(cin, numero);
    strcpy(_numero, numero.c_str());


    cout<<"Localidad:"<<endl;
    cin.ignore();
    getline(cin, localidad);
    strcpy(_localidad, localidad.c_str());


    cout<<"Antiguedad:"<<endl;
    cin>>this->_antiguedad;

    cout<<"Superficie Total:"<<endl;
    cin>>this->_superficie_total;


    cout<<"Superficie cubierta:"<<endl;
    cin>>this->_superficie_cubierta;


    cout<<"Habitaciones:"<<endl;
    cin>>this->_habitaciones;

    cout<<endl;
    precios.cargar();

    cout<<endl;
    duenio.cargar();

    }


};


#endif // CASA_H_INCLUDED
