#include <iostream>
   using namespace std;
   
    void mostrarMaxMin(int arr[], int n){
        int maximo = arr[0];
        int minimo = arr[0];

        for (int i = 0; i < n; i++)
        {
            if(arr[i] > maximo)
            maximo = arr[i];
            if (arr[i] < minimo)
            minimo = arr[i];
            
        }

        cout<< "El valor maximo es: "<< maximo <<endl;
        cout<< "El valor minimo es: "<< minimo <<endl;
        
    }
int main (){
    int n;
    cout<<"Canidad de numeros";
    cin>>n;
    
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cout<< "Numero" << i + 1 << ":";
        cin>> arr[i];
    }

    mostrarMaxMin(arr, n); // Se manda a llamar a la función
    return 0;
    
}