#include <iostream>

using namespace std;

int obtener_edad(int anioActual, int anioNacimiento){
    int valor = anioActual - anioNacimiento;
    return valor;
}

int main()
{
    int edad, anioNacimiento;
    string nombre, apellido;

    cout << "Ingrese su nombre: " << endl;
    cin >> nombre;

    cout << "Ingrese su apellido: " << endl;
    cin >> apellido;

    cout << "Ingrese su año de nacimiento: " << endl;
    cin >> anioNacimiento;

    edad = obtener_edad(2018, anioNacimiento);
    cout << "Su edad es: " << edad << endl;


    return 0;
}
