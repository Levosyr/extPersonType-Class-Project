#ifndef DATETYPE_H
#define DATETYPE_H

#include <iostream>

using namespace std;

class dateType {
public:
    dateType(int month = 1, int day = 1, int year = 1900) : dMonth(month), dDay(day), dYear(year) {}

    int getMonth() const {
        return dMonth;
    }

    void print() const {
        cout << dMonth << "-" << dDay << "-" << dYear << endl;
    }

private:
    int dMonth, dDay, dYear;
};

#endif
#pragma once
