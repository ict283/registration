// For review purposes only! Does not represent the actual solution!!

#include <iostream>
#include <fstream>
#include "course.h"  // Course class declaration
#include "regist.h"  // Registration class declaration

using namespace std;

// Main program:
// Open an input file stream, read a Registration object,
// including its list of courses. Redisplay all information,
// and calculate the total credits taken. Write the results
// to a file stream.

int main()
{
  ifstream infile( "rinput.txt" );
  if( !infile ) return -1;

  Registration R;
  infile >> R;

  ofstream ofile( "routput.txt" );

// Use a debugger and track down the calls made "behind the scene"
  ofile << R
    << "Number of courses = " << R.GetCount() << '\n'
    << "Total credits     = " << R.GetCredits() << '\n';

  // Declare and initialize a Course, and modify
  // its credits.

  Course aCourse( "MTH_3020", 'B', 2 );
  aCourse.SetCredits( 5 );
  cout << aCourse << endl; // the operator << for Course is called

  return 0;
}
