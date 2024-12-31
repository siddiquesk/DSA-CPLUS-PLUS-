// pointers are variable that stores address of another variable
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{

  int a = 10;
  int *ptr = &a;
  cout << " " << ptr << endl;
  cout << " " << &a;


  int a = 10;
  int *ptr = &a;
  int **ptr2 = &ptr;
  cout << " " << *ptr << endl;  // a value 10
  cout << " " << a << endl;     // a value 10
  cout << " " << *ptr2 << endl;  //ptr ka address ff08
  cout << " " << **ptr2 << endl; // a value 10
  return 0;
}
*/
// pointer question
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{

  int a = 5;
  int *p = &a;
  int **q = &p;
  cout << " " << *p << endl;//5 print hoga a
  cout << " " << **q << endl;//5 print hoga value a
  cout << " " << p << endl;//address a
  cout << " " << *q << endl;//adress a
  return 0;
}
*/
/*

#include <iostream>
#include <vector>
using namespace std;
int main()
{

  int a = 10;
  int *ptr = &a;
  cout << " " << ptr << endl;
  cout << " " << &a;


  int a = 10;
  int *ptr = &a;
  int **ptr2 = &ptr;
  cout << " " << *ptr << endl;  // a value 10
  cout << " " << a << endl;     // a value 10
  cout << " " << *ptr2 << endl;  //ptr ka address ff08
  cout << " " << **ptr2 << endl; // a value 10
  return 0;
}
*/
// pass by refrence concept

void changeA(int &p) // refrence a ka hai same location
{
  p = 20;
}

#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int a = 10;
  changeA(a);
  cout << a << endl;
  int k = 20;
  int *m = &k;
  cout << m << endl;
  m++;
  cout << m << endl;

  return 0;
}