#include<iostream>

using namespace std;

int main()
{
  int year;

  cin>>year;

  if (year%100 == 0)
  {
    if (year%400 == 0)
    {
      cout<<"It is a Leap Year";
    }

    else
      cout<<"It is not a Leap Year";
  }

  else
  {
    if (year%4 == 0)
      cout<<"It is a Leap Year";

    else
      cout<<"It is not a Leap Year";
  }

}
