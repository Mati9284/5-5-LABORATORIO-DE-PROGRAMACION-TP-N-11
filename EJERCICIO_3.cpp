#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <cmath>
#include <string>
#include <string.h>
#include <ctype.h>
#include <vector>
using namespace std;

class Empleado
{
private:
    string nombre = "";
    int salario = 0;
    int departamento = 0;
public:
    Empleado(string nombreParametro, int salarioParametro, int departametoParametro) {
        nombre = nombreParametro; salario = salarioParametro; departamento = departametoParametro;
    }
    string getNombre() {
        return nombre;
    }
    int getSalario() {
        return salario;
    }
    int getDepartamento() {
        return departamento;
    }
    ~Empleado() {}
};

class Empresa
{
private:
    vector <Empleado> Empleados;
public:
    Empresa() {
        string nombreEmpleado;
        int numeroEmpleados = 0, salario = 0, departamento = 0;
        cout << "Ingrese el numero de empleados: ";
        cin >> numeroEmpleados;
        while (numeroEmpleados <= 0)
        {
            cout << "lo siento, el numero de empleados no puede ser 0 o menos, ingreselo de nuevo: ";
            cin >> numeroEmpleados;
        }
        for (int i = 0; i < numeroEmpleados; i++)
        {
            cout << "Ingrese el nombre del empleado N " << i+1 << ": ";
            getline(cin,nombreEmpleado);
            if (nombreEmpleado == "")
            {
                getline(cin,nombreEmpleado);
            }
            cout << "Ingrese el salario del empleado N " << i+1 << ": ";
            cin >> salario;
            cout << "Ingrese el numero de departamento del empleado N " << i+1 << ": ";
            cin >> departamento;
            while (departamento < 0)
            {
                cout << "Lo siento, puso un número menor a 0, ingrese el numero de departamento N " << i+1 << ": ";
                cin >> departamento;
            }
            
            Empleados.push_back(Empleado(nombreEmpleado,salario,departamento));
        }
    }
    void calcularNomina() {
        int nominaTotal = 0;
        for (int i = 0; i < Empleados.size(); i++)
        {
            nominaTotal += Empleados[i].getSalario();
        }
        cout << "La nomina total es: " << nominaTotal << endl;
    }
    void empleadoConMayorSalario() {
        int salarioMayor = 0;
        for (int i = 0; i < Empleados.size(); i++)
        {
            if (Empleados.size() == 1)
            {
                cout << "El empleado que tiene el salario mayor es " << Empleados[i].getNombre() << endl;
                break;
            }
            salarioMayor = 0;
            for (int j = 0; j < Empleados.size(); j++)
            {
                if (Empleados[i].getSalario() >= Empleados[j].getSalario())
                {
                    salarioMayor++;
                }
                else {
                    break;;
                }
            }
            if (salarioMayor == Empleados.size())
            {
                cout << "El empleado que tiene el salario mayor es: " << Empleados[i].getNombre() << endl;
                break;
            }
        }
        
    }
    void departametoEmpleadoEncontrar() {
        int numeroDepartamentoEncontrar = 0;
        bool encontrarAlguno = false;
        cout << "Ingrese el numero de departamento a encontrar: ";
        cin >> numeroDepartamentoEncontrar;
        while (numeroDepartamentoEncontrar < 0)
        {
            cout << "lo siento, el numero de departamento a encontrar no puede ser negativo, ingreselo de nuevo: ";
            cin >> numeroDepartamentoEncontrar;
        }
        for (int i = 0; i < Empleados.size(); i++)
        {
            if (Empleados[i].getDepartamento() == numeroDepartamentoEncontrar)
            {
                cout << "Empleado " << Empleados[i].getNombre() << " esta en el N de departamento " << numeroDepartamentoEncontrar << endl;
                encontrarAlguno = true;
            }
            else {
                encontrarAlguno = false;
            }
        }
        if (encontrarAlguno == false)
        {
            cout << "No se encontro ningun empleado con ese departamento\n";
        }
    }
    ~Empresa() {}
};

int main() {
    Empresa empresa1;
    empresa1.calcularNomina();
    empresa1.empleadoConMayorSalario();
    empresa1.departametoEmpleadoEncontrar();
    return 0;
}

// 3. Crea una clase Empresa que tenga una colección de
// objetos Empleado. Cada Empleado tiene un nombre, salario
// y departamento. Implementa métodos para calcular la nómina
// total, encontrar al empleado con mayor salario y listar a
// los empleados de un departamento específico.
