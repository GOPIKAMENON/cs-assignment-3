#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float a, b, c, x1, x2, p, q, i;
    
    cin >> a >> b >> c;
    p= b*b - 4*a*c;
    
    if (p > 0) {
        x1 = (-b + sqrt(p)) / (2*a);
        x2 = (-b - sqrt(p)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (p == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(p)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        q = -b/(2*a);
        i =sqrt(-p)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << q << "+" << i << "i" << endl;
        cout << "x2 = " << q << "-" << i << "i" << endl;
    }

    return 0;
}
