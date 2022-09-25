#include <iostream>
#include <math.h>
//LAB 1.1 var 14 Dennis Rybaltovskii IU8-13
using namespace std;
int main() {
    int Ax, Ay, Bx, By, Cx, Cy;
    cout << "Input Ax" << endl;
    cin >> Ax;
    cout << "Input Ay" << endl;
    cin >> Ay;
    cout << "Input Bx" << endl;
    cin >> Bx;
    cout << "Input By" << endl;
    cin >> By;
    cout << "Input Cx" << endl;
    cin >> Cx;
    cout << "Input Cy" << endl;
    cin >> Cy;

    double AB, BC, CA;
    AB = sqrt(pow(Bx-Ax, 2) + pow(By-Ay, 2));
    BC = sqrt(pow(Cx-Bx, 2) + pow(Cy-By, 2));
    CA = sqrt(pow(Ax-Cx, 2) + pow(Ay-Cy, 2));

    if ((AB < BC + CA) && (BC < AB + CA) && (CA < AB + BC)){
       cout << "Everything correct, please wait while we calculating the result" << endl;
    }
    else{
        cout << "There's no triangle with these sides" << endl;
        return 0;
    }

    double medAB, medBC, medCA;
    medAB = 0.5*sqrt(2*(pow(BC, 2) + pow(CA, 2)) - pow(AB, 2));
    medBC = 0.5*sqrt(2*(pow(AB, 2) + pow(CA, 2)) - pow(BC, 2));
    medCA = 0.5*sqrt(2*(pow(BC, 2) + pow(AB, 2)) - pow(CA, 2));

    double sum = medAB + medBC + medCA;
    cout << sum << endl;

    return 0;
}
