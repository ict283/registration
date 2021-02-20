// For review purposes only! Does not represent the actual solution!

#include "course.h"

Course::Course()
{
  name[0] = '\0'; // it is a char * string, not a C++ string object.
}

Course::Course( const char * nam, char sect,
                unsigned cred )
{
  strncpy( name, nam, CourseNameSize );
  section = sect;
  credits = cred;
}

unsigned Course::GetCredits() const
{
  return credits;
}

void Course::SetCredits( unsigned cred )
{
  credits = cred;
}

istream & operator >>( istream & input, Course & C )
{
  Y name;
  Y section;
  Y credits;

  input >> name >> section >> credits;

  C.setName(name);
  C.setSection(section);
  C.setCredits(credits);

  return input;
}

ostream & operator <<( ostream & os, const Course & C )
{
  os << "  Course:  " << C.getName() << '\n'
     << "  Section: " << C.getSection() << '\n'
     << "  Credits: " << C.getCredits() << '\n';
  return os;
}
