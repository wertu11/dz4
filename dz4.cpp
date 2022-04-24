#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "a and b: " << endl;
    cin >> a >> b;
    float y, t, Error;
    Error = 0;
    y = 0;
    t = 0;
    if (a < b) y = (((a - b) / (a + b)) * ((a + b) / (a * a - a * b + b * b)));
    else if(b == 0) y = a + log(b * b);
    else if (a = b) {
        cout << "Error: a = b" << endl;
        Error = 1;
    }
    else if (b == 0) {
        cout << "Error: b = 0" << endl;
        Error = 1;
    }
    if (y == b and (a*a - y) > 0 and (2*b - sqrt(a*a - y)) != 0) t = (2 * y + sqrt(y * y - a)) / (2 * b - sqrt(a * a - y));
    else if (y < b and a != b) t = sin(y) * sin(y) + 1 / (tan(a - b));
    else if((y * cos(b)) > 0) t = pow((y * sin(a)), (1 / 3)) + 1 / (sqrt(y * cos(b)));
    else if ((a * a - y) <= 0) {
        cout << "Error: (a * a - y) <= 0" << endl;
        Error = 1;
    }
    else if ((2 * b - sqrt(a * a - y)) == 0) {
        cout << "Error: (2 * b - sqrt(a * a - y)) == 0)" << endl;
        Error = 1;
    }
    else if ((y * cos(b)) <= 0) {
        cout << "Error: (y * cos(b)) <= 0" << endl;
        Error = 1;
    }
    if (Error == 0)
        cout << a << " " << b << " " << y << " " << t;


    return 0;
}
