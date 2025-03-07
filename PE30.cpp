#include<iostream>
using namespace std;
int p(int x)
{
  return x*x*x*x*x;
}
int f(int x)
{
  if(x==0)
    return 0;
  return f(x/10)+p(x%10);
}
int main()
{
  int ans=0;
  for(int i=2;i<1000000;i++)
    if(i==f(i))
      {
	cout<<i<<endl;
	ans+=i;
      }
  cout<<ans;
}
