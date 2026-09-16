#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>
#include <vector>
using namespace std;

class Animal
{
protected:
    string nombre;
    int edad;

public:
    Animal(string nombreAnimalParametro)
    {
        cout << "Ingrese el nombre" << nombreAnimalParametro << ": ";
        getline(cin,nombre);
        if (nombre == "")
        {
            getline(cin,nombre);
        }
        cout << "Ingrese la edad" << nombreAnimalParametro << ": ";
        cin >> edad;
    }
    ~Animal() {}

    void hacerRuido(string nombreAnimalParametro)
    {
        cout << nombreAnimalParametro << " hace ruido \n";
    }

    void comer(string nombreAnimalParametro)
    {
        cout << nombreAnimalParametro << " esta comiendo \n";
    }

    void mostrarInfo(string nombreAnimalParametro)
    {
        cout << "Nombre" << nombreAnimalParametro << ": " << nombre << endl;
        cout << "Edad" << nombreAnimalParametro << ": " << edad << endl;
    }
};

class Perro : public Animal
{
public:
    Perro() : Animal(" del perro")
    {
        hacerRuido("Perro");
        comer("Perro");
        mostrarInfo(" del perro");
    }
};

class Gato : public Animal
{
public:
    Gato() : Animal(" del gato")
    {
        hacerRuido("Gato");
        comer("Gato");
        mostrarInfo(" del gato");
    }
};

class Pajaro : public Animal
{
public:
    Pajaro() : Animal(" del pajaro")
    {
        hacerRuido("Pajaro");
        comer("Pajaro");
        mostrarInfo(" del pajaro");
    }
};

int main()
{
    setlocale(LC_ALL, "spanish");
    Perro perro1;
    Gato gato1;
    Pajaro pajaro1;
    return 0;
}

// Crea una clase base Animal con métodos como hacerRuido()
// y comer(). Deriva clases como Perro, Gato y Pajaro,
// sobrescribiendo los métodos para representar
// comportamientos específicos.