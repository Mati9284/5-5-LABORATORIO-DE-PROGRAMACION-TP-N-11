#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>
#include <vector>
using namespace std;

class Vehiculo {
protected:
    string marca = "", modelo = "";
    int año = 0;
public:
    Vehiculo(string tipoVehiculoParametro) {
        cout << "Ingrese la marca" << tipoVehiculoParametro << ": ";
        getline(cin,marca);
        if (marca == "")
        {
            getline(cin,marca);
        }
        cout << "Ingrese el modelo" << tipoVehiculoParametro << ": ";
        getline(cin,modelo);
        if (modelo == "")
        {
            getline(cin,modelo);
        }
        cout << "Ingrese el año" << tipoVehiculoParametro << ": ";
        cin >> año;
    }
    void mostrarInfo(string tipoVehiculoParametro, string nombreParametro, string valorParametro) {
        cout << "Marca" << tipoVehiculoParametro << ": " << marca << endl;
        cout << "Modelo" << tipoVehiculoParametro << ": " << modelo << endl;
        cout << "Año" << tipoVehiculoParametro << ": " << año << endl;
        cout << nombreParametro << tipoVehiculoParametro << ": " << valorParametro << endl;
    }
    void mostrarInfo(string tipoVehiculoParametro, string nombreParametro, int valorParametro) {
        cout << "Marca" << tipoVehiculoParametro << ": " << marca << endl;
        cout << "Modelo" << tipoVehiculoParametro << ": " << modelo << endl;
        cout << "Año" << tipoVehiculoParametro << ": " << año << endl;
        cout << nombreParametro << tipoVehiculoParametro << ": " << valorParametro << endl;
    }
    ~Vehiculo() {}
};

class Coche: public Vehiculo
{
private:
    string pintura = "";
public:
    Coche():Vehiculo(" del coche") {
        cout << "Ingrese la pintura del coche: ";
        getline(cin,pintura);
        if (pintura == "")
        {
            getline(cin,pintura);
        }
        mostrarInfo(" del coche", "Pintura",pintura);
    }
    ~Coche() {}
};

class Motocicleta: public Vehiculo
{
private:
    int peso = 0;
public:
    Motocicleta():Vehiculo(" de la motocicleta") {
        cout << "Ingrese el peso de la motocicleta: ";
        cin >> peso;
        mostrarInfo(" de la motocicleta", "Peso",peso);
    }
    ~Motocicleta() {}
};

class Camion: public Vehiculo
{
private:
    int cargaMaxima = 0;
public:
    Camion():Vehiculo(" del camion") {
        cout << "Ingrese la carga maxima del camion: ";
        cin >> cargaMaxima;
        mostrarInfo(" del camion", "Carga Maxima",cargaMaxima);
    }
    ~Camion() {}
};

int main() {
    setlocale(LC_ALL, "spanish");
    Coche coche1;
    Motocicleta motocicleta1;
    Camion camion1;
    return 0;
}
// 5. Define una clase base Vehiculo con atributos como
// marca, modelo y año. Deriva clases como Coche, Motocicleta y
// Camion, agregando atributos específicos (e.g., número
// de puertas, cilindrada).