#include<iostream>

int main(){
    using namespace std;
    int primervalor, segundovalor;
    int *apuntador;
    apuntador = &primervalor;
    *apuntador = 10;
    apuntador = &segundovalor;
    *apuntador = 20;
    cout<<"Primer valor es: "<<primervalor <<endl;
    cout<<"Segundo valor es: "<<segundovalor <<endl;
    system("pause");
    return EXIT_SUCCESS;
}