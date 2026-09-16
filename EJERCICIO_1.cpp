// 1. Crea una clase Biblioteca que tenga una colección
// de objetos Libro. Implementa métodos para agregar, 
// eliminar y buscar libros. Agrega un método para 
// calcular el número total de páginas de todos los libros.

#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>
#include <vector>
using namespace std;

class Libro
{
private:
    string nombreLibro = "";
    string autorLibro = "";
public:
    Libro() {
        cout << "Ingrese el nombre del libro: ";
        getline(cin,nombreLibro);
        if (nombreLibro == "")
        {
            getline(cin,nombreLibro);
        }
        cout << "Ingrese el autor del libro: ";
        getline(cin,autorLibro);
        if (autorLibro == "")
        {
            getline(cin,autorLibro);
        }
    }
    string getNombre () {
        return nombreLibro;
    }
    string getAutor () {
        return autorLibro;
    }
    ~Libro() {}
};

class Biblioteca
{
private:
    vector <Libro> libros = {Libro(),Libro(),Libro()};
public:
    Biblioteca() {
        libros;
    }
    void agregarLibro() {
        int numeroLibros = 0;
        cout << "Ingrese el número de libros a añadir: ";
        cin >> numeroLibros;
        for (int i = 0; i < numeroLibros; i++)
        {
            libros.push_back(Libro());
        }
    }
    void eliminarLibro () {
        string nombreLibros = "";
        cout << "Estos son los libros que hay: \n";
        for (int i = 0; i < libros.size(); i++)
        {
            cout << "Libro " << i+1 << " Nombre: " << libros[i].getNombre() << " Autor: " << libros[i].getAutor() << endl;
        }
        cout << "Ingrese el nombre de libro a eliminar\n";
        getline(cin,nombreLibros);
        if (nombreLibros == "")
        {
            getline(cin,nombreLibros);
        }
        for (int i = 0; i < libros.size(); i++)
        {
            if (libros[i].getNombre() == nombreLibros)
            {
                libros.erase(libros.begin()+ i);
                break;
            }
        }
        cout << "Estos son los libros que quedaron: \n";
        for (int i = 0; i < libros.size(); i++)
        {
            cout << "Libro " << i+1 << " Nombre: " << libros[i].getNombre() << " Autor: " << libros[i].getAutor() << endl;
        }
        
    }
    void buscarLibro() {
        cout << "Estos son los libros: \n";
        for (int i = 0; i < libros.size(); i++)
        {
            cout << "Libro " << i+1 << " Nombre: " << libros[i].getNombre() << " Autor: " << libros[i].getAutor() << endl;
        }
    }
    ~Biblioteca() {}
    return 0;
};

int main ()
{
    Biblioteca biblioteca1;
    biblioteca1.agregarLibro();
    biblioteca1.eliminarLibro();
    biblioteca1.buscarLibro();
}
