//Triangle.cpp

#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

void Triangle::SetFirst(int value) {
    first = value;
}

void Triangle::SetSecond(unsigned int value) {
    second = value;
}

bool Triangle::Init(int x, int y) {
    if (x <= 0 || y <= 0) {
        first = 0;
        second = 0;
        return false;
    }
    else {
        first = x;
        second = y;
        return true;
    }
}

void Triangle::Display() const {
    cout << "First Catet: " << first << ", Second Catet: " << second << endl;
}

void Triangle::Read() {
    int x, y;

    do {
        cout << "Enter the first catet: ";
        cin >> x;
        cout << "Enter the second catet: ";
        cin >> y;
        if (!Init(x, y)) {
            cout << "Wrong catets, enter valid values!" << endl;
        }
    } while (!Init(x, y));
}

double Triangle::Hypotenuse() const {
    int result, temporaryResult;
    temporaryResult = pow(first, 2) + pow(second, 2);
    result = sqrt(temporaryResult);
    return result;
}

std::string Triangle::to_string() const {
    stringstream ss;
    ss << "First Catet: " << first << ", Second Catet: " << second;
    return ss.str();
}
