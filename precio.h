#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;


#ifndef PRECIO_H_INCLUDED
#define PRECIO_H_INCLUDED


class Precio
{
private:
    float _precio_venta;
    float _precio_alquiler;

public:
    Precio(){};


    float get_venta();
    float get_alquiler();

    void set_venta(float);
    void set_alquiler(float);

    void cargar(){

    int opc;
    cout<<"Esta a la Venta o Alquiler? (1: Venta, 2: Alquiler): ";
    cin>>opc;
cout<<endl;
    switch(opc){

case 1:
    cout<<"Precio venta:"<<endl;
    cin>>this->_precio_venta;
    _precio_alquiler=0;
    break;

case 2:
    cout<<"Precio alquiler:"<<endl;
    cin>>this->_precio_alquiler;
    _precio_venta=0;
    break;

    }



    }


protected:

};


#endif // PRECIO_H_INCLUDED
