#include <iostream>
using namespace std;
class ComplexNumber {
private:
    double real;
    double imag;
public:
    ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imag + other.imag);
    }
    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(real - other.real, imag - other.imag);
    }
    ComplexNumber operator*(const ComplexNumber& other) const {
        return ComplexNumber(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }
    ComplexNumber operator/(const ComplexNumber& other) const {
        double denom = other.real * other.real + other.imag * other.imag;
        return ComplexNumber((real * other.real + imag * other.imag) / denom, 
                             (imag * other.real - real * other.imag) / denom);
    }
    void print() const {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    ComplexNumber c1(4, 3);
    ComplexNumber c2(2, 1);
    ComplexNumber sum = c1 + c2;
    ComplexNumber diff = c1 - c2;
    ComplexNumber prod = c1 * c2;
    ComplexNumber quot = c1 / c2;
    cout << "c1 + c2 = "; sum.print();
    cout << "c1 - c2 = "; diff.print();
    cout << "c1 * c2 = "; prod.print();
    cout << "c1 / c2 = "; quot.print();
    return 0;
}
