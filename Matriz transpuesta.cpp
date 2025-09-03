#include <iostream>

using namespace std;

int main()
{
    int matriz [3][3];
    int transpuesta[3][3];

    // Leer la matriz

    cout<<"Ingrese los elementos de la matriz 3x3: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Elmento ["<<i<<"]["<< j <<"]: ";
            cin>>matriz[i][j];
        }
    }

    //calcular la traspuesta
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpuesta[j][i] = matriz[i][j];
        }
    }
    
    //Mostrar la matriz original
    cout<<"\nMatriz original:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;        
    }
    
    //Mostrar la transpuesta
    cout<<"\nMatriz transpuesta:\n";
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<transpuesta[i][j]<<" ";
        }
        cout<<endl;        
    }
    return 0;
}