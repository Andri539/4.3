#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, x, xp, xk, dx, F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------------------------------------" << endl;
    cout << setw(4) << "x" << setw(10) << "|" << setw(15) << "F" << endl;
    cout << "----------------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x + 10 < 0 && b != 0) {
            F = a * pow(x, 2) - c * x + b;
        }
        else if (x + 10 > 0 && b == 0) {
            F = (x - a) / x;
        }
        else {
            F = -x / (a - c);
        }

        cout << setw(7) << setprecision(2) << x
            << setw(10) << "|"
            << setw(15) << setprecision(3) << F << endl;

        x += dx;
    }
    cout << "----------------------------------------" << endl;

    return 0;
}
