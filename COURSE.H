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

  // These operators have been made friends. They have
  // privileged access to class internals.
  // Very useful for debugging the class, but not very good for class design.
  // We will keep using it for now but you will have a chance in a later lab
  // to redesign this class.
  friend ostream & operator <<( ostream & os, const Course & C );
  friend istream & operator >>( istream & input, Course & C );

private:
  string name;
  char section;   // section (letter) can be enrolment mode
  int  credits;   // number of credits
};


#endif
