#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
ifstream fin("PE22_input.txt");
int score(string s)
{
  int ret=0;
  for(int i=0;i<s.size();i++)
    ret+=s[i]-'A'+1;
  return ret;
}
int solve(vector<string>v)
{
  int ans=0;
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
    ans+=score(v[i])*(i+1);
  return ans;
}
int main()
{
  string s;
  vector<string>v;
  while(fin>>s)
    v.push_back(s);
  cout<<solve(v)<<endl;
}
