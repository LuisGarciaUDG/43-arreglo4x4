/*43
hacer un programa que llene una matriz de 4 x 4 y determine la posicion
(renglon columna del numero mayor almacenado en la matriz).
Imprimir: el numero mayor, la posición del numero mayor y la tabla.

Nota importante: Los numeros deben ser diferentes.

Estructura for y arreglos bidimencionales
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 19 de marzo de 2015

*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    system ("color f0");
    int x, y, vec[4] [4], mayor=0, posf, posc;

    for (x=0; x<4; x=x+1)
    {
        for (y=0; y<4; y=y+1)
        {
        vec[x] [y]=0;
        }
    }


    cout << "\n\t matriz de 4 x 4 \n\n";

    for (x=0; x<4; x=x+1)
    {
        for (y=0; y<4; y=y+1)
        {
        cout<<"\t Coordenadas del elemento: fila: "<<x<<" columna: "<<y<<"  :  ";
        cin>>vec[x] [y];

        if (vec[x] [y]>mayor)
            {
            mayor=vec[x][y];
            posf=x;
            posc=y;
            }
        }
    }

cout<<"\n\n";

    for (x=0; x<4; x=x+1)
    {
        for (y=0; y<4; y=y+1)
        {
        cout<<"\t "<<vec[x] [y];
        }
        cout<<"\n";
    }
        cout<<"\n\n\n\t Elemento con mayor valor: "<<mayor;
        cout<<"\n\n\t Posicion de la fila:        "<<posf;
        cout<<"\n\n\t Posicion de la columna:    "<<posc<<"\n\n\t\t\t";

        system ("pause");

    return 0;
}
