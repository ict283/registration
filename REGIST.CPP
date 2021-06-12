// For review purposes only! Does not represent the actual solution!!

#include "regist.h"


Registration::Registration()
{
  count = 0;
}

unsigned Registration::getCredits() const
{
  unsigned sum = 0;
  for(unsigned i = 0; i < count; i++)
    sum += courses[i].getCredits();

  return sum;
}

unsigned Registration::getCount() const
{
  return count;
}

istream & operator >>( istream & input, Registration & R )
{
  //use setters instead
  input >> R.studentId >> R.semester >> R.count;

  for(unsigned i = 0; i < R.count; i++)
    input >> R.courses[i];  // track down which >> operator is called. Hint: look at what is being input.

  return input;
}

ostream & operator <<( ostream & os, const Registration & R )
{
  //use getters instead
  os << "Student ID: " << R.studentId << '\n'
     << "Semester:   " << R.semester << '\n';

  for(unsigned i = 0; i < R.count; i++)
    os << R.courses[i] << '\n';

  return os;
}
