#include<iostream>
using namespace std;
int f[100],cnt;
long long fib(long long n)
{
  cnt++;
  cout<<cnt<<endl;
  if(f[n]!=0)
    return f[n];
  if(n==1 || n==2)
    {
      f[n]=1;
      return 1;
    }
  f[n]=fib(n-1)+fib(n-2);
  return f[n];
}
int main()
{
  cout<<fib(46)<<endl;
}
