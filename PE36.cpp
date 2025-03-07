#include<iostream>
#include<vector>
using namespace std;
bool is_pal(vector<int>v)
{
  for(int i=0;i*2<v.size();i++)
    if(v[i]!=v[v.size()-i-1])
      return false;
  return true;
}
vector<int> digit_in_base(int x,int b)
{
  vector<int>ret;
  while(x)
    {
      ret.push_back(x%b);
      x/=b;
    }
  return ret;
}
int main()
{
  int ans=0;
  for(int i=1;i<=1000000;i++)
    if(is_pal(digit_in_base(i,10)) && is_pal(digit_in_base(i,2)))
      ans+=i;
  cout<<ans<<endl;
}
