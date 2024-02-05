#include <iostream>
using namespace std;

double area(double B, double H) {
    return 0.5 * B * H;
}

void area(double B, double H, double& a) {
    a = 0.5 * B * H;
}

int main() {
    double base,height=0;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    double areaByValue = area(base, height);
    cout << "Area of the triangle according to call by value is: " << areaByValue << endl;

    double areaByReference;
    area(base, height, areaByReference);
    cout << "Area of the triangle according to call by reference is: " << areaByReference << endl;

    return 0;
}