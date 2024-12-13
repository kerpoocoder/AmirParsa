#include<iostream>
using namespace std;
bool isprime(int x)
{
  for(int i=2;i<x;i++)
    if(x%i==0)
      return false;
  return true;
}
int main()
{
  int n;cin>>n;
  if(isprime(n))
    cout<<"prime"<<endl;
  else
    cout<<"not prime"<<endl;
}
