#include<iostream>
#include<conio.h>
using namespace std;
class fuction
{
  int a;
  int b;
  int num;
public:
  void arg (int n1, int n2)
  {
    a = n1;
    b = n2;
    if (a % b == 0)
      {
	cout << "\n the first number is divisible by the second number ";
      }
    else
        cout << "\nthe first number is not divisible by the second number ";
  }
  void arg (int n)
  {
    num = n;
    if (n % 2 == 1)
      {
	cout << "\n number is a prime";
      }
    else
      cout << "\n number is not prime";
  }
};

int
main ()
{
  fuction obj;
  int n1, n2, n3;
  cout << "\n enter the two numbers :";
  cin >> n1 >> n2;
  obj.arg (n1, n2);
  cout << "\n enter a number : ";
  cin >> n3;
  obj.arg (n3);
}
