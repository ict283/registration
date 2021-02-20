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

  /**
    * @brief Get credits
    * @pre   Credits obj must be initalised
    * @post  Returns credit
    */
  unsigned getCredits() const;
  // Get the number of credits.

  /**
    * @brief set credit
    * @param credit
    * @post  credit is modified
    */
  void setCredits( unsigned cred );
  // Set the number of credits.

  Y setName (Y name);

  Y getName ();

  Y setSection (Y name);

  Y getSection ();

private:
  string name;
  char section;   // section (letter) can be enrolment mode
  int  credits;   // number of credits
};

ostream & operator <<( ostream & os, const Course & C );
istream & operator >>( istream & input, Course & C );

#endif
