#include<iostream>
using namespace std;
int ds(int n)
{
  if(n==0)
    return 0;
  return ds(n/10)+n%10;
}
int main()
{
  int n;
  cin>>n;
  cout<<ds(n)<<endl;
}
