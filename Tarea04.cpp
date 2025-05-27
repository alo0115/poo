#include <iostream>
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
            cout << "Calculando area del triangulo...\n";
            area = calcArea();
        }
    }
};

class Triangle : public FigGeo {
private:
    float base, height;
public:
    Triangle(float b = 1.0, float h = 1.0) {
        base = b;
        height = h;
        area = 0;
    }

    float calcArea() override {
        return 0.5 * base * height;
    }

    void setBase(float b) { base = b; }
    void setHeight(float h) { height = h; }
    float getBase() { return base; }
    float getHeight() { return height; }
};

int main() {
    Triangle tri(3.0, 2.0);
    tri.saveArea();
    cout << "Área del triángulo: " << tri.getArea() << endl;
    return 0;
}
