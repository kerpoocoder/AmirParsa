#include<iostream>
using namespace std;
int n,d,a[100];
int main()
{
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
  cin>>d;

  for(int i=0;i<100;i++)
    a[i]*=d;
  for(int i=0;i<99;i++)
    {
      a[i+1]+=a[i]/10;
      a[i]%=10;
    }
  //1000 times -> a*d^1000
  for(int i=99;i>=0;i--)
    cout<<a[i];
}
