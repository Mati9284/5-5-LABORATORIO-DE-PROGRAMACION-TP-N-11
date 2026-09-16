#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>
#include <vector>
using namespace std;

class Calculadora {
public:
    int sumar(int a, int b) {
        return a + b;
    }

    float sumar(float a, float b) {
        return a + b;
    }

    int restar(int a, int b) {
        return a - b;
    }

    float restar(float a, float b) {
        return a - b;
    }

    int multiplicar(int a, int b) {
        return a * b;
    }

    float multiplicar(float a, float b) {
        return a * b;
    }

    int dividir(int a, int b) {
        return a / b;
    }

    float dividir(float a, float b) {
        return a / b;
    }
};

int main()
{
    setlocale(LC_ALL, "spanish");
    Calculadora calculadora1;
    cout << calculadora1.sumar(1,1) << endl;
    cout << calculadora1.sumar(1.5f,1.5f) << endl;
    cout << calculadora1.restar(1,1) << endl;
    cout << calculadora1.restar(1.5f,1.5f) << endl;
    cout << calculadora1.multiplicar(1,1) << endl;
    cout << calculadora1.multiplicar(1.5f,1.5f) << endl;
    cout << calculadora1.dividir(1,1) << endl;
    cout << calculadora1.dividir(1.5f,1.5f) << endl;
    return 0;
}

// Implementa una clase Calculadora con métodos para 
// realizar operaciones aritméticas básicas (+, -, *, /). 
// Sobrecarga estos métodos para que puedan operar con 
// diferentes tipos de datos (enteros, flotantes).