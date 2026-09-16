#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>
#include <vector>
using namespace std;

class Figura
{
protected:
    string color = "";
    int posicionX = 0, posicionY = 0;

public:
    Figura(string textoFormaParametro)
    {
        cout << "Ingrese el color" << textoFormaParametro;
        getline(cin, color);
        if (color == "")
        {
            getline(cin, color);
        }
        cout << "Ingrese la posicion x" << textoFormaParametro;
        cin >> posicionX;
        cout << "Ingrese la posicion y" << textoFormaParametro;
        cin >> posicionY;
    }
    void calcularArea(float radioParametro) {
        cout << "El area del circulo es " << (radioParametro * radioParametro) * 3.1416 << endl;
    }
    void calcularPerimetro(float radioParametro)
    {
        cout << "El perimetro del circulo es " << radioParametro * (2 * 3.1416) << endl;
    }
    void calcularArea(float lado1Parametro, float lado2Parametro, float lado3Parametro)
    {
        cout << "El area del triangulo es " << (lado1Parametro * lado2Parametro) / 2 << endl;
    }
    void calcularPerimetro(float lado1Parametro, float lado2Parametro, float lado3Parametro)
    {
        cout << "El perimetro del triangulo es " << lado1Parametro + lado2Parametro + lado3Parametro << endl;
    }
    void calcularArea(float baseParametro, float alturaParametro)
    {
        cout << "El area del rectangulo es " << (baseParametro * alturaParametro) << endl;
    }
    void calcularPerimetro(float baseParametro, float alturaParametro)
    {
        cout << "El perimetro del rectangulo es " << (baseParametro + alturaParametro) * 2 << endl;
    }
    ~Figura() {}
};

class Circulo : public Figura
{
private:
    float radio = 0;
public:
    Circulo() : Figura(" del circulo: ")
    {
        cout << "Ingrese el radio del circulo: ";
        cin >> radio;
        calcularArea(radio);
        calcularPerimetro(radio);
    }
    ~Circulo() {}
};

class Triangulo : public Figura
{
private:
    float lado1 = 0, lado2 = 0, lado3 = 0;
public:
    Triangulo() : Figura(" del triangulo: ")
    {
        cout << "Ingrese el lado 1 del triangulo: ";
        cin >> lado1;
        cout << "Ingrese el lado 2 del triangulo: ";
        cin >> lado2;
        cout << "Ingrese el lado 3 del triangulo: ";
        cin >> lado3;
        calcularArea(lado1,lado2,lado3);
        calcularPerimetro(lado1,lado2,lado3);
    }
    ~Triangulo() {}
};

class Rectangulo : public Figura
{
private:
    float base = 0, altura = 0;

public:
    Rectangulo() : Figura(" del rectangulo: ")
    {
        cout << "Ingrese la base 1 del rectangulo: ";
        cin >> base;
        cout << "Ingrese la altura del rectangulo: ";
        cin >> altura;
        calcularArea(base,altura);
        calcularPerimetro(base,altura);
    }
    ~Rectangulo() {}
};

int main()
{
    cout << "Este programa sirve para crear una clase base forma y de esta deriven otras formas (circulo, cuadrado etc...)\n";
    Circulo circulo1;
    Triangulo triangulo1;
    Rectangulo rectangulo1;
    return 0;
}



//4. Crea una clase base Figura con atributos como color
//y posición. Deriva clases como Circulo, Rectangulo y Triangulo,
//cada una con sus propios atributos y métodos para calcular el
//área y el perímetro.
