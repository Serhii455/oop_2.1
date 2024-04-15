//2.1.cpp

#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle makeTriangle(int x, int y) {
    Triangle nn;
    if (!nn.Init(x, y))
        cout << "Wrong argument to Init" << endl;
    return nn;
}

int main() {
    Triangle n;
    n.Read();
    n.Display();
    cout << "Hypotenuse = " << n.Hypotenuse() << endl;

    int a, b;
    cout << "Enter the first catet: ";
    cin >> a;
    cout << "Enter the second catet: ";
    cin >> b;

    Triangle i = makeTriangle(a, b);
    i.Display();

    return 0;
}
