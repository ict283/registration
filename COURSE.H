// For review purposes only! Does not represent the actual solution!!

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>  // string library

using namespace std;

const unsigned CourseNameSize = 10;

class Course {
public:
  Course();
  Course( const char * nam, char sect, unsigned cred );
  // Construct a course from a name, section letter,
  // and number of credits.

  unsigned GetCredits() const;
  // Get the number of credits.

  void SetCredits( unsigned cred );
  // Set the number of credits.

  // Write the implementation (.cpp) yourself

  Y getName();

  void setName(Y);

  Y getSection();

  void setSection(Y);

  Y getCredits();

  void setCredits(Y);

private:
  string name;     // string
  char section;   // section (letter) can be enrolment mode
  int  credits;   // number of credits
};

ostream & operator <<( ostream & os, const Course & C );

istream & operator >>( istream & input, Course & C );

#endif
