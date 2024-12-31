/*
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the age ";
  cin >> n;
  if (n >= 18)
  {
    cout << "You can vote";
  }
  else
  {
    cout << "you can not vote";
  }

  return 0;
}
*/
// find maximum of three number
/*
#include <iostream>
using namespace std;
int main()
{
  int x, y, z;
  cout << "enter first number" << endl;
  cin >> x;
  cout << "enter second number" << endl;
  cin >> y;
  cout << "enter third number" << endl;
  cin >> z;
  if (x > y && x > z)
  {
    cout << "Number is big" << x;
  }
  else if (y > z && y > x)
  {
    cout << "Number is big " << y;
  }
  else
  {
    cout << "number is big " << z;
  }
  return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
  int n;
  bool isprime = true;
  cout << "enter The number ";
  cin >> n;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {

      isprime = false;
      break;
    }
  }
  if (isprime == true)
  {
    cout << "Number is prime";
  }
  else
  {
    cout << "Number is not prime ";
  }
  return 0;
}