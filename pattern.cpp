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
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
void pattern10(int n)
{

  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }

    cout << endl;
  }

  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
}

// efficient way
void pattern11(int n)
{
  for (int i = -n + 1; i < n; i++)
  {
    int spaces = abs(i);
    int stars = n - spaces;

    cout << string(stars - 1, '*') << endl;
  }
}
// --------------------------------------------------------------------------
// 1
// 01
// 101
// 0101
// 10101

void pattern12(int n)
{
  int start = 1;
  for (int i = 1; i <= n; i++)
  {
    start = (i % 2) ? 0 : 1;

    for (int j = 1; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}
// --------------------------------------------------------------------------
// 1
// 01
// 101
// 0101
// 10101

void pattern13(int n)
{
  int start = 1;
  for (int i = 1; i <= n; i++)
  {
    start = (i % 2) ? 0 : 1;

    for (int j = 1; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}
// --------------------------------------------------------------------------
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
void pattern14(int n)
{
  int spaces = 2 * (n - 1);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }

    for (int j = 1; j <= spaces; j++)
    {
      cout << " ";
    }

    for (int j = i; j >= 1; j--)
    {
      cout << j;
    }

    cout << endl;
    spaces -= 2;
  }
}
// --------------------------------------------------------------------------
// 1
// 23
// 456
// 78910
// 1112131415
void pattern15(int n)
{
  int count = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << count;
      count++;
    }

    cout << endl;
  }
}
// --------------------------------------------------------------------------
// A B
// A B C
// A B C D
// A B C D E
// A B C D E F
void pattern16(int n)
{
  char alphabet = 'A';
  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'A'; ch <= alphabet + i; ch++)
    {
      cout << ch << " ";
    }

    cout << endl;
  }
}

// --------------------------------------------------------------------------
// A B C D E F
// A B C D E
// A B C D
// A B C
// A B
void pattern17(int n)
{
  char alphabet = 'A';
  for (int i = n; i >= 1; i--)
  {
    for (char ch = 'A'; ch <= alphabet + i; ch++)
    {
      cout << ch << " ";
    }

    cout << endl;
  }
}
// --------------------------------------------------------------------------
// A
// B B
// C C C
// D D D D
// E E E E E
void pattern18(int n)
{
  char alphabet = 'A';
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << alphabet << " ";
    }

    cout << endl;
    alphabet++;
  }
}
// --------------------------------------------------------------------------
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

void pattern19(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    char ch = 'A';
    int breakPoint = (2 * i + 1) / 2;
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << ch;
      j < breakPoint ? ch++ : ch--;
    }

    cout << endl;
  }
}
// --------------------------------------------------------------------------
// E
// D E
// C D E
// B C D E
// A B C D E
void pattern20(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = ('A' + n - 1) - i; ch <= ('A' + n - 1); ch++)
    {
      cout << ch << " ";
    }

    cout << endl;
  }
}
// --------------------------------------------------------------------------
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
void pattern21(int n)
{
  int spaces = 0;
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }

    for (int j = 1; j <= spaces; j++)
    {
      cout << " ";
    }

    for (int j = i; j >= 1; j--)
    {
      cout << "*";
    }

    cout << endl;
    spaces += 2;
  }

  int spaces2 = 2 * (n - 1);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }

    for (int j = 1; j <= spaces2; j++)
    {
      cout << " ";
    }

    for (int j = i; j >= 1; j--)
    {
      cout << "*";
    }

    cout << endl;
    spaces2 -= 2;
  }
}
// --------------------------------------------------------------------------

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
  cout << endl;
  pattern11(n);
  cout << endl;
  pattern12(n);
  cout << endl;
  pattern13(n);
  cout << endl;
  pattern14(n);
  cout << endl;
  pattern15(n);
  cout << endl;
  pattern16(n);
  cout << endl;
  pattern17(n);
  cout << endl;
  pattern18(n);
  cout << endl;
  pattern19(n);
  cout << endl;
  pattern20(n);
  cout << endl;
  pattern21(n);
}