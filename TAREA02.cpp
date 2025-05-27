#include <iostream>
#define PI 355.0/113.0

using namespace std;

// Clase Triangulo
class Triangulo {
private:
    double base;
    double altura;

public:
    // Constructor
    Triangulo(double b, double h) {
        base = b;
        altura = h;
    }

    // Método para mostrar datos
    void mostrar() {
        cout << "Triángulo:" << endl;
        cout << "Base: " << base << endl;
        cout << "Altura: " << altura << endl;
    }
};

// Clase Circulo
class Circulo {
private:
    double radio;

public:
    // Constructor
    Circulo(double r) {
        radio = r;
    }

    // Método para mostrar datos
    void mostrar() {
        cout << "Círculo:" << endl;
        cout << "Radio: " << radio << endl;
        cout << "Valor de Pi: " << PI << endl;
    }
};

// Función principal
int main() {
    Triangulo t(8.0,5.0);
    Circulo c(2.5);

    t.mostrar();
    cout << endl;
    c.mostrar();

    return 0;
}
