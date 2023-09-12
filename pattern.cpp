// https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/

#include <bits/stdc++.h>
using namespace std;

// --------------------------------------------------------------------------
// pattern - 1
// *****
// *****
// *****
// *****
// *****

void pattern1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
// --------------------------------------------------------------------------

// pattern - 2
// *
// **
// ***
// ****
// *****

void pattern2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
// --------------------------------------------------------------------------

// pattern - 3
// 1
// 12
// 123
// 1234
// 12345

void pattern3(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}
// --------------------------------------------------------------------------

// pattern - 4
// 1
// 22
// 333
// 4444
// 55555

void pattern4(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << endl;
  }
}

// --------------------------------------------------------------------------

// pattern - 5
// 12345
// 1234
// 123
// 12
// 1

// Or

// *****
// ****
// ***
// **
// *

void pattern5(int n)
{
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
      // cout << "*";
    }
    cout << endl;
  }
}

// --------------------------------------------------------------------------

// pattern - 6
//     *
//    ***
//   *****
//  *******
// *********

void pattern6(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
}
// --------------------------------------------------------------------------

// pattern - 7
// *********
//  *******
//   *****
//    ***
//     *

void pattern7(int n)
{
  for (int i = n; i <= n; i--)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < 2 * i - 1; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
}

// --------------------------------------------------------------------------

// pattern - 8
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

void pattern8(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
  for (int i = n; i <= n; i--)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < 2 * i - 1; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
}
// Effiecent way

void pattern9(int n)
{
  for (int i = -n + 1; i < n; i++)
  {
    int spaces = abs(i);
    int stars = n - spaces;

    cout << string(spaces, ' ') << string(stars * 2 - 1, '*') << endl;
  }
}
// --------------------------------------------------------------------------
void pattern10(int n)
{
  for (int i = -n + 1; i < n; i++)
  {
    int spaces = abs(i);
    int stars = n - spaces;

    cout << string(stars - 1, '*') << endl;
  }
}
int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  pattern1(n);
  cout << endl;
  pattern2(n);
  cout << endl;
  pattern3(n);
  cout << endl;
  pattern4(n);
  cout << endl;
  pattern5(n);
  cout << endl;
  pattern6(n);
  cout << endl;
  pattern7(n);
  cout << endl;
  pattern8(n);
  cout << endl;
  pattern9(n);
  cout << endl;
  pattern10(n);
}