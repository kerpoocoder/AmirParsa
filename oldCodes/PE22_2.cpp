#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
ifstream fin("0022_names.txt");
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
  fin>>s;
  for(int i=0;i<s.size();i++)
    if(s[i]==',' || s[i]=='"')
      s[i]=' ';
  istringstream sin(s);
  string a;
  vector<string>v;
  while(sin>>a)
    {
      v.push_back(a);
    }
  cout<<solve(v)<<endl;
}
