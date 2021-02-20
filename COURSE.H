// For review purposes only! Does not represent the actual solution!

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

class Course {
public:
  Course();
  Course( const string nam, char sect, unsigned cred );
  // Construct a course from a name, section letter,
  // and number of credits.

  unsigned GetCredits() const;
  // Get the number of credits.

  void SetCredits( unsigned cred );
  // Set the number of credits.

private:
  string name;
  char section;   // section (letter) can be enrolment mode
  int  credits;   // number of credits
};

ostream & operator <<( ostream & os, const Course & C );
istream & operator >>( istream & input, Course & C );

#endif
