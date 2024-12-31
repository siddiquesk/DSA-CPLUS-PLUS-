/*  #include <iostream>
using namespace std;

int main()
{

  int n, a = -1, b = 1, c;    // a b  c
  cout << "Enter the Range "; // 0
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    c = a + b;
    cout << " " << c;
    a = b;
    b = c;
  }

  return 0;
}  */

/* #include <iostream>
using namespace std;

int main()
{

    int x = 10;
    char b = 'D';
    float per = 9.000;
    bool p = 0;
    double more = 229929292929.0000;
    cout << x << " Int" << sizeof(x) << endl;
    cout << b << " Char " << sizeof(b) << endl;
    cout << p << " Bool " << sizeof(p) << endl;
    cout << more << " double " << sizeof(more) << endl;
    cout << per << " float" << sizeof(per) << endl;



  return 0;
} */

#include <iostream>
using namespace std;

int main()
{

  int a = 10;
  cout << a++ << endl;
  int c, b = 5;
  c = b++;
  cout << b << endl;
  cout << c << endl;

  return 0;
}