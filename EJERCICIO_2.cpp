// 2. Diseña una clase Restaurante con una colección de
// objetos Mesa. Cada Mesa tiene un número de comensales
// y un estado (ocupada, libre). Implementa métodos para
// reservar una mesa, liberar una mesa y obtener el número
// de mesas libres.

#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>
#include <vector>
using namespace std;

class Mesa
{
private:
    int numeroComensales = 0;
    bool ocupada = false, reservada = false;

public:
    Mesa()
    {
        cout << "Ingrese el número de comensales que puede tener la mesa: \n";
        cin >> numeroComensales;
    }
    void reservarMesa()
    {
        if (reservada != true)
        {
            if (ocupada != true)
            {

            }
            else {
                reservada = true;
            }
        }
        cout << "Mesa reservada";
    }
    void liberarMesa() {
        reservada = false;
        ocupada = false;
        cout << "Mesa liberada";
    }
    bool comprobarMesaLiberada() {
        if (ocupada != true)
        {
            if (reservada == true)
            {
                return false;
            }
            else {
                return true;
            }  
        }
        return false;
    }
    ~Mesa() {}
};

class Restaurante
{
private:
    vector <Mesa> mesas {Mesa(),Mesa(),Mesa()};
public:
    Restaurante() {
        mesas;
    }
    void reservarMesas () {
        string reservar = "";
        for (int i = 0; i < mesas.size(); i++)
        {
            cout << "Quiere reservar la mesa (si o no)" << i+1 << "?";
            getline(cin,reservar);
            if (reservar == "")
            {
                getline(cin,reservar);
            }
            if (reservar == "si" || reservar == "SI" || reservar == "sí" || reservar == "Sí" || reservar == "Si")
            {
                mesas[i].reservarMesa();
                cout << "Mesa reservada \n";
            }
        }
        
    }
    void liberarMesas () {
        string liberar = "";
        for (int i = 0; i < mesas.size(); i++)
        {
            cout << "Quiere liberar la mesa (si o no)" << i+1 << "?";
            getline(cin,liberar);
            if (liberar == "")
            {
                getline(cin,liberar);
            }
            if (liberar == "si" || liberar == "SI" || liberar == "sí" || liberar == "Sí" || liberar == "Si")
            {
                mesas[i].liberarMesa();
                cout << "Mesa liberada \n";
            }
        }
        
    }
    void numeroDeMesasLibres () {
        int mesasLibres = 0;
        for (int i = 0; i < mesas.size(); i++)
        {
            if (mesas[i].comprobarMesaLiberada() == true)
            {
                mesasLibres++;
            }
        }
        cout << "Mesas libres: " << mesasLibres << endl;
    }
    ~Restaurante() {}
};

int main() {
    Restaurante restaurante1;
    restaurante1.reservarMesas();
    restaurante1.liberarMesas();
    restaurante1.numeroDeMesasLibres();
    return 0;
}