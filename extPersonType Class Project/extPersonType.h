#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include "personType.h"
#include "dateType.h"
#include "addressType.h"

class extPersonType : public personType {
public:
    extPersonType(string first = "", string last = "", int month = 1, int day = 1, int year = 1900,
        string addr = "", string c = "", string s = "", int zip = 10000, string phone = "", string rel = "")
        : personType(first, last), birthdate(month, day, year), address(addr, c, s, zip),
        phoneNumber(phone), relationship(rel) {}

    void setPhoneNumber(string phone) {
        phoneNumber = phone;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }

    void setRelationship(string rel) {
        if (rel == "Family" || rel == "Friend" || rel == "Business") {
            relationship = rel;
        }
    }

    string getRelationship() const {
        return relationship;
    }

    int getBirthMonth() const {
        return birthdate.getMonth();
    }

    void print() const {
        personType::print();
        birthdate.print();
        address.print();
        cout << phoneNumber << endl;
        cout << relationship << endl;
    }

private:
    dateType birthdate;
    addressType address;
    string phoneNumber;
    string relationship;
};

#endif
#pragma once
