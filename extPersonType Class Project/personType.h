#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <iostream>
#include <string>

using namespace std;

class personType {
public:
    personType(string first = "", string last = "") : firstName(first), lastName(last) {}

    void setName(string first, string last) {
        firstName = first;
        lastName = last;
    }

    string getFirstName() const {
        return firstName;
    }

    string getLastName() const {
        return lastName;
    }

    void print() const {
        cout << firstName << " " << lastName << endl;
    }

private:
    string firstName;
    string lastName;
};

#endif
#pragma once
