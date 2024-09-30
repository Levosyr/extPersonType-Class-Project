#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <iostream>
#include <string>

using namespace std;

class addressType {
public:
    addressType(string addr = "", string c = "", string s = "", int zip = 10000)
        : address(addr), city(c), state(s), zipCode(zip) {}

    void print() const {
        cout << address << endl;
        cout << city << " " << state << ", " << zipCode << endl;
    }

private:
    string address, city, state;
    int zipCode;
};

#endif

