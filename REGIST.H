// For review purposes only! Does not represent the actual solution!!

#ifndef REGIST_H
#define REGIST_H


#include <iostream>
#include "course.h"

using namespace std;

const unsigned MaxCourses = 10;

class Registration {
public:
  Registration();

  unsigned GetCredits() const;
  unsigned GetCount() const;

  // Write the implementation (.cpp) yourself

  Y getStudentId();

  void setStudentId(Y);

  Y getSemester();

  void setSemester(Y);

  Y getCount();

  void setCount(Y);

  Y getCourses();

  void setCourses(Y);

private:
  long studentId;             // student ID number
  unsigned semester;          // semester year, number
  unsigned count;             // number of courses
  Course courses[MaxCourses]; // array of courses
};

ostream & operator <<( ostream & os, const Registration & R);

istream & operator >>( istream & input, Registration & R );

#endif
