#include <stdio.h>
#include <iostream>

using namespace std;

int add(int a, int b)
{
  return a+b;
}



int main()
{
  cout << "hello world" << endl;
  int a=0;
  int b=0;
  
  cout << "insert first number: ";//주석도 됨
  cin>>a;
  cout << "insert second number: ";
  cin>>b;
  
  int result = add(a,b);
  
  cout << "first + second = " << result << endl;
  
 
  return 0;
}
