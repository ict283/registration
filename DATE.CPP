#include "DATE.H"

//Implement the Date class methods yourself

//...

//Demo overloaded operator implementation

//Example:
//23.05.2021
//24.05.2021

istream & operator >>( istream & input, Date & D )
{
  Y day;
  Y month;
  Y year;

  //not accurate do check documentation
  getline (os, day, ".");
  getline (os, month, ".");
  getline (os, year, "\n");

  //use setters
  D.setDay(day);
  D.setMonth(month);
  D.setYear(month);

  return input;
}

ostream & operator <<( ostream & os, const Date & D )
{
  //use getters instead
  os << D.getDay()<<"."<< D.getMonth()<<"."<< D.getYear()<<endl;

  return os;
}
