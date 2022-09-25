#include <iostream>
#include <math.h>
//LAB 1.2 var 14 Denis Rybaltovskii IU8-13
using namespace std;
int main() {

    double x, y;
    cin >> x;
    cin >> y;

    if (x < 0.0 && y < 0.0){
        x = fabs(x);
        y = fabs(y);
        cout << x << endl;
        cout << y << endl;
        return 0;
    }
    if (x < 0.0 || y < 0.0){
        cout << x + 0.5 << endl;
        cout << y + 0.5 << endl;
        return 0;
    }

    if ((x <= 0.5 || x >= 2.0) && (y <= 0.5 || y >= 2.0)){
        cout << x*10 << endl;
        cout << y*10 << endl;
        return 0;
    }

    cout << x << endl;
    cout << y << endl;
    return 0;
}
