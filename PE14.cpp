#include<iostream>
using namespace std;
int ans,mx;
int collatz(long long n)
{
  if(n==1)
    return 1;
  if(n%2==0)
    return collatz(n/2)+1;
  return collatz(3*n+1)+1;
}
int main()
{
  for(int i=1;i<1000000;i++)
    {
      int k=collatz(i);
      if(k>mx)
	{
	  ans=i;
	  mx=k;
	}
    }
  cout<<ans<<endl;
}
