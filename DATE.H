// For review purposes only! Does not represent the actual solution!!

#ifndef REGIST_H
#define REGIST_H

#include <iostream>

using namespace std;

class Date {

public:

Date();

~Date();

Y getDay();

void setDay(Y);

Y getMonth();

void setMonth(Y)

Y getYear();

void setYear(Y)

private:

Y day;
Y month;
Y year;

};

ostream & operator <<( ostream & os,const Date & D);

istream & operator >>( istream & input,Date & D );

#endif
