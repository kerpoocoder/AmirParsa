#include<iostream>
using namespace std;
int a[100],b[100],c[100],n,m;
int main()
{
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
  cin>>m;
  for(int i=0;i<m;i++)
    cin>>b[i];

  int carry=0;
  for(int i=0;i<100;i++)
    {
      c[i]=a[i]+b[i]+carry;
      carry=c[i]/10;
      c[i]%=10;
    }

  for(int i=99;i>=0;i--)
    cout<<c[i];
}
//784219
//9 1 2 4 8 7 0 0 0 0 0 0 0 0...
