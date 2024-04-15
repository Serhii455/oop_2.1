//Triangle.h

#pragma once
#include <iostream>
#include <sstream>

class Triangle {
private:
    double first;
    double second;

public:
    int GetFirst() const { return first; }
    unsigned int GetSecond() const { return second; }
    void SetFirst(int value);
    void SetSecond(unsigned int value);

    bool Init(int x, int y);
    void Display() const;
    void Read();

    double Hypotenuse() const;
    std::string to_string() const;
};
