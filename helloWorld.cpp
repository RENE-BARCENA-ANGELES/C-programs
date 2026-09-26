#include <iostream>
#include <string>

using namespace std;

int main(){

    int edad;
    string nombre;

    cout << "Hola, por favor ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Hola, por favor ingrese su edad: ";
    cin >> edad;

    cout << "\nHola soy: " << nombre << " y tengo: " << edad << " anios." << endl;
    return 0;
}
