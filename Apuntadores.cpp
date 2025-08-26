#include <iostream>
 int main(){
    using namespace std;

    int i= 8;
    cout<<"i tiene el valor de: "<<i<<" y es almacenada en: "<<&i<<endl;
    int *p = &i; /* p ahora apunta a i*/
    cout<<"p tiene el valor de: "<<p<<" y esta almacenada en: "<<&p<<endl;
    int j = *p; /* j ahora contiene 8*/
    cout<<"j tiene el valor de: "<<j<<" y esta almacenada en: "<<&j<<endl;
    *p = 12; /* i ahora contiene 12*/
    cout<<"El valor del entero apuntado por p es: "<< *p<<endl;
    cout<<"i tiene el valor de: "<<i<<" y esta alamcenada en: "<<&i<<endl;
 }