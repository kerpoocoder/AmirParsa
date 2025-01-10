#include<iostream>
using namespace std;
bool isprime(long long x)
{
  for(long long i=2;i*i<=x;i++)
    if(x%i==0)
      return false;
  return true;
}
int main()
{
  long long n;cin>>n;
  if(isprime(n))
    cout<<"prime"<<endl;
  else
    cout<<"not prime"<<endl;
}
