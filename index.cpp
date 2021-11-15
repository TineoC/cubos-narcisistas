#include <iostream>
#include <math.h>

using namespace std;

/*
    Fecha de Inicio: 11 - 11 - 2021
    Fecha de Entrega: 16 - 11 - 2021
    
    Grupo #02

        * Christopher Tineo
        * Camilo Maria
        * Lya Sanchez
        * Sahira Tejada
        * Taiyab Gillani
        * José Fernandez


    * Instrucciones
        Son cubos narcisistas aquellos enteros de tres dígitos cuya sumas de sus dígitos elevadas al cubo, da como resultado al mismo número.

        123 = 1^3 + 2^3 + 3^3 = 1 + 8 + 27 = 36
        
        153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

        Realizar un programa de C++ que encuentre los cubos narcisistas entre 100 y 999.
*/

bool esNarcisista(int numero);

int main()
{
    int index = 100;

    cout << "Los números narcisistas entre 100 y 999 son:\n"
         << endl;

    while (index < 1000)
    {
        if (esNarcisista(index))
        {
            cout << "* El número " << index << " es narcisista" << endl;
        }

        index++;
    }
}

bool esNarcisista(int numero)
{
    int residuo, digitos[3], operador;

    operador = numero;

    for (int i = 0; i < 3; i++)
    {
        residuo = operador % 10;
        digitos[i] = residuo;
        operador /= 10;
    }

    int primerDigito = digitos[2];
    int segundoDigito = digitos[1];
    int tercerDigito = digitos[0];

    int sumaDeCubos = pow(primerDigito, 3) + pow(segundoDigito, 3) + pow(tercerDigito, 3); // Suma del cubo de los dígitos.

    if (sumaDeCubos == numero)
    {
        // Si la suma de los cubos de los dígitos es igual al número que conforman esos dígitos.
        return true;
    }

    return false;
}