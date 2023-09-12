#include <iostream>
using namespace std;

// ------------------------------------------------------------
// basic skeleton

// How to take input and show ouput
void printOutput()
{
  int x, y;

  cout << "Enter a two numbers: " << endl;
  cin >> x >> y;

  cout << "x=" << x << " "
       << "y=" << y;
}

// Basic data types
void dataTypes()
{
  // int, long, long long, float, double
  // string and getline
  // char (256 character in english dictonary)

  // int
  int x1 = 10;

  // long
  long x2 = 10;

  // long
  long long x3 = 10;

  // float
  float y1 = 5.2;

  // double
  double y2 = 8.3;

  // string
  // if we take input like "umair here" then it only takes first word as an input not a full string
  string s;
  // cin >> s;

  // for getting the whole string as an input we can use getline fun
  string str;
  // getline(cin, str);
  // cout << str;

  char ch;
  // cin >> ch;
  // cout << ch;
}

// Loops
void loops()
{
  // for loop
  for (int i = 0; i < 5; i++)
  {
    cout << i << endl;
  }

  // while loop
  int i = 1;
  while (i < 4)
  {
    cout << i << endl;
    i += 1;
  }

  // do while loop (run mandotry one time even condition false)
  int j = 2;
  do
  {

    cout << "Umair" << j << endl;
    j += 1;
  } while (j <= 1)
  {
    cout << j << endl;
  }
}

// functions
// parameterized functions
// non-parameterized functions
void printName(string name)
{
  cout << "Hey" << name;
}


int main()
{
  printOutput();
  dataTypes();
  printName();

  return 0;
}