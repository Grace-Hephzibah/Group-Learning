#include<iostream>

using namespace std;

int main()
{
  int num;
  int max;

  cin>>num;
  max = num;

  for(int i = 1; i<=9; i++)
  {
    cin>>num;

    if (num > max)
      max = num;
  }

  cout<<"The maximum element is "<<max;

  return 0;

}
