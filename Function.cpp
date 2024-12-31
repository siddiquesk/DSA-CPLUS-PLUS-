/*
Find two min number
#include <iostream>
using namespace std;

int minNum(int x, int y)
{
  if (x < y)
  {
    return x;
  }
  else
  {
    return y;
  }
}

int main()
{
  int x = 15, y = 10;

  cout << " min Number is " << minNum(x, y);
  return 0;
}
*/
/*
#include <iostream>
using namespace std;
int ReverseNumber(int n)
{
  int s = 0, r;
  while (n != 0)
  {
    r = n % 10;
    s = (s * 10) + r;
    n = n / 10;
  }
  return s;
}
int main()
{
  int n;
  cout << "Enter a number ";
  cin >> n;
  int res = ReverseNumber(n);
  cout << "Reverse Number is " << res;
  return 0;
}
*/
/*
#include <iostream>
using namespace std;
bool isPrime(int num)
{
  if (num <= 1)
    return false;
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int number;
  cout << "Enter a number: ";
  cin >> number;

  if (isPrime(number))
  {
    cout << number << " is a prime number." << endl;
  }
  else
  {
    cout << number << " is not a prime number." << endl;
  }

  return 0;
}
*/

#include <iostream>
using namespace std;

int ArmstrongNumber(int x)
{
  int y, s = 0, p;
  y = x;
  while (x != 0)
  {
    p = x % 10;
    s = s + (p * p * p);
    x = x / 10;
  }
  if (y == s)
  {
    cout << "It is armstrong number ";
  }
  else
  {
    cout << "number is not armstrong number ";
  }
  return 0;
}
int main()
{
  int x;
  cout << "Enter the number ";
  cin >> x;
  ArmstrongNumber(x);
  return 0;
}