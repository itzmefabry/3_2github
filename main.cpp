#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double parte1 = (x*x*x + x*x) / (y*y - y);
    double parte2 = (x / y) + 5;
    double z = (parte1 - parte2) / (2 * x);

    cout << z;

    return 0;
}