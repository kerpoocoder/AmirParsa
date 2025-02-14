#include<iostream>
#include<vector>
using namespace std;
#define bignum vector<int>
bignum sum(bignum a,bignum b)
{
  int sz=max(a.size(),b.size())+5,carry=0;
  a.resize(sz);
  b.resize(sz);
  bignum c(sz);
  for(int i=0;i<sz;i++)
    {
      c[i]=a[i]+b[i]+carry;
      carry=c[i]/10;
      c[i]%=10;
    }
  while(c.back()==0)
    c.pop_back();
  return c;
}
bignum prd(bignum a,int k)
{
  int carry=0;
  a.resize(a.size()+10);
  for(int i=0;i<a.size();i++)
    {
      a[i]*=k;
      a[i]+=carry;
      carry=a[i]/10;
      a[i]%=10;
    }
  while(a.back()==0)
    a.pop_back();
  return a;
}
bignum pw(int a,int b)
{
  bignum c={1};
  for(int i=0;i<b;i++)
    c=prd(c,a);
  return c;
}
bignum fact(int a)
{
  bignum c={1};
  for(int i=2;i<=a;i++)
    c=prd(c,i);
  return c;
}
int digitsum(bignum a)
{
  int ret=0;
  for(int i=0;i<a.size();i++)
    ret+=a[i];
  return ret;
}
bignum str_to_bignum(string s)
{
  bignum a;
  for(int i=s.size()-1;i>=0;i--)
    a.push_back(s[i]-'0');
  return a;
}
void show(bignum a)
{
  for(int i=a.size()-1;i>=0;i--)
    cout<<a[i];
  cout<<endl;
}
void solve25()
{
  vector<bignum> fib={{1},{1}};
  while(fib.back().size()<1000)
    fib.push_back(sum(fib[fib.size()-1],
		      fib[fib.size()-2]));
  cout<<fib.size()<<endl;	  
}
int main()
{
  cout<<digitsum(pw(2,1000))<<endl;
  cout<<digitsum(fact(100))<<endl;
  solve25();
  string x,y;
  cin>>x>>y;
  show(sum(str_to_bignum(x),str_to_bignum(y)));
}
