#include<iostream>
using namespace std;
int
main ()
{
  int a, b, c, d;
  cout << "Enter your three number:-";
  cin >> a >> b >> c >> d;

  if (a > b && a > c && a > d)
    {
      cout << "A is greatest:-" << a;
    }
  else if (b > a && b > c && b > d)
    {
      cout << "B is greatest:-" << b;
    }
  else if (c > a && c > d && c > d)
    {
      cout << "C is greatest:-" << c;
    }
  else
    {
      cout << "D is greatest:-" << d;
    }
}
