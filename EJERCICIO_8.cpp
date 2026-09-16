#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>
#include <vector>
using namespace std;

class Comparador {
private:
    string valorComparacion = "";
public:
    void comparar(int a, int b)
    {
        valorComparacion = (a == b) ? "verdadero" : "falso";
        cout << valorComparacion << endl;
    }

    void comparar(float a, float b)
    {
        valorComparacion = (a == b) ? "verdadero" : "falso";
        cout << valorComparacion << endl;
    }

    void comparar(string a, string b)
    {
        valorComparacion = (a == b) ? "verdadero" : "falso";
        cout << valorComparacion << endl;
    }
};

// PROFE ESTO DE AQUÍ LO HICE CON IA PERO entiendo
//que el & es para referencia y no que me genere una
//copia y const es para que no modifiquen los atributos
//del objeto eh. ESTÁ HECHO CON IA LA CLASE

class Conversor {
public:
    double metrosAKilometros(double m) const { return m / 1000.0; }
    double metrosACentimetros(double m) const { return m * 100.0; }
    double metrosAMillas(double m) const { return m * 0.000621371; }
    double metrosAPies(double m) const { return m * 3.28084; }

    double kilometrosAMetros(double km) const { return km * 1000.0; }
    double centimetrosAMetros(double cm) const { return cm / 100.0; }
    double millasAMetros(double mi) const { return mi / 0.000621371; }
    double piesAMetros(double ft) const { return ft / 3.28084; }

    double kilosAGramos(double kg) const { return kg * 1000.0; }
    double kilosALibras(double kg) const { return kg * 2.20462; }
    double gramosAKilos(double g) const { return g / 1000.0; }
    double librasAKilos(double lb) const { return lb / 2.20462; }

    double celsiusAFahrenheit(double c) const { return (c * 9.0 / 5.0) + 32.0; }
    double fahrenheitACelsius(double f) const { return (f - 32.0) * 5.0 / 9.0; }
    double celsiusAKelvin(double c) const { return c + 273.15; }
    double kelvinACelsius(double k) const { return k - 273.15; }

    double convertir(double valor, const string& tipo) const {
        if (tipo == "m->km")   return metrosAKilometros(valor);
        if (tipo == "km->m")   return kilometrosAMetros(valor);
        if (tipo == "kg->lb")  return kilosALibras(valor);
        if (tipo == "lb->kg")  return librasAKilos(valor);
        if (tipo == "C->F")    return celsiusAFahrenheit(valor);
        if (tipo == "F->C")    return fahrenheitACelsius(valor);
    }
};

int main()
{
    Comparador comparador1;
    comparador1.comparar(1, 1);
    comparador1.comparar(1.5f,1.6f);
    comparador1.comparar("1", "4");
    Conversor conversor1;
    cout << conversor1.convertir(5,"m->km") << endl;
    cout << conversor1.convertir(5,"km->m") << endl;
    cout << conversor1.convertir(5,"kg->lb") << endl;
    cout << conversor1.convertir(5,"lb->kg") << endl;
    cout << conversor1.convertir(5,"C->F") << endl;
    cout << conversor1.convertir(5,"F->C") << endl;
    return 0;
}

// Crea una clase Comparador con un método comparar()
// que reciba dos objetos de cualquier tipo y determine
// si son iguales. Sobrecarga este método para comparar
// diferentes tipos de datos (enteros, cadenas, objetos
// personalizados). Implementa una clase Conversor con
// métodos para convertir entre diferentes unidades de
// medida (longitud, masa, temperatura).Sobrecarga estos
// métodos para permitir diferentes tipos de conversiones.
