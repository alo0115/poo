#include <iostream>
#include <cmath>
using namespace std;

class FigGeo {
protected:
    float area;
public:
    virtual float calcArea() = 0;

    float getArea() {
        return area;
    }

    void saveArea() {
        if(area == 0) {
            cout << "Calculando área del círculo...\n";
            area = calcArea();
        }
    }
};

class Circle : public FigGeo {
private:
    float radius;
public:
    Circle(float r = 1.0) {
        radius = r;
        area = 0;
    }

    float calcArea() override {
        return M_PI * radius * radius;
    }

    void setRadius(float r) { radius = r; }
    float getRadius() { return radius; }
};

int main() {
    Circle circ(4.0);
    circ.saveArea();
    cout << "Área del círculo: " << circ.getArea() << endl;
    return 0;
}
