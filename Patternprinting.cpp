/*
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the rows ";
  cin >> n;
  cout << "enter the coloums ";
  cin >> n;
  for (int i = 0; i < n; i++) // ABCDE
  {                           // ABCDE
    char ch = 'A';
    for (int j = 0; j < n; j++)
    {
      cout << ch;
      ch = ch + 1;
    }
    cout << endl;
  }
  return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
  int row, col;
  cout << "enter the rows ";
  cin >> row;
  cout << "enter the coloums ";
  cin >> col;
  char ch = 'A';
  int count = 1;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << " " << count; // 1A 2B 3C 4D
      cout << ch;           // 5E 6F 7G 8H
      count++;              // 9I 10J 11K 12L
      ch = ch + 1;
    }
    cout << endl;
  }
  return 0;
}
*/

// Triangle pattern
/*
#include <iostream>
using namespace std;
int main()
{
  int row, col;
  cout << "enter the rows ";
  cin >> row;
  cout << "enter the coloums ";
  cin >> col;

  for (int i = 0; i < row; i++)     //*
  {                                 //**
    for (int j = 0; j < i + 1; j++) //***
    {                               //****
      cout << " * ";
    }
    cout << endl;
  }

  return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
  int row, col;
  cout << "Enter the number of rows: ";
  cin >> row;

  for (int i = 0; i < row; i++)
  {
    char ch = 'A' + i;           // Row ke hisaab se character set karte hain
    for (int j = 0; j <= i; j++) // Har row me i+1 baar character print hoga
    {
      cout << ch;
    }
    cout << endl;
  }

  return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the number ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j > 0; j--)
    {
      cout << " " << j;
    }
    cout << endl;
  }
  return 0;
}
*/
/*
// floyd triangle
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the number ";
  cin >> n;
  char ch = 'A';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << " " << ch;
      ch = ch + 1;
    }
    cout << endl;
  }
  return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j > 0; j--)
    {
      char ch = 'A' + j - 1; // Convert j to corresponding alphabet
      cout << " " << ch;
    }
    cout << endl;
  }
  return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < n - i; j++)
    {
      cout << (i + 1);
    }
    cout << endl;
  }
  return 0;
}
 */

// pyramid triangle structure
/*
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i + 1; j++)
    {
      cout << " " << j;
    }
    for (int j = i; j > 0; j--)
    {
      cout << " " << j;
    }

    cout << endl;
  }
  return 0;
}
*/
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number: ";
  cin >> n;

  // Upper part of the diamond
  for (int i = 0; i < n; i++)
  {
    // Print leading spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // Print the first star
    cout << "*";

    // Print spaces between stars (if not the first row)
    if (i > 0)
    {
      for (int j = 0; j < 2 * i - 1; j++)
      {
        cout << " ";
      }
      // Print the second star
      cout << "*";
    }
    cout << endl;
  }

  // Lower part of the diamond
  for (int i = n - 2; i >= 0; i--)
  {
    // Print leading spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // Print the first star
    cout << "*";

    // Print spaces between stars (if not the last row)
    if (i > 0)
    {
      for (int j = 0; j < 2 * i - 1; j++)
      {
        cout << " ";
      }
      // Print the second star
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
