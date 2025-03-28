#include<iostream>
#include<map>
using namespace std;
int main()
{
  map<string,int>m;
  m["parsa"]=10;
  m.insert(make_pair("ali",10));
  if(m.find("reza")!=m.end())
    cout<<m["reza"]<<endl;
  m["maryam"]++;
  cout<<m["maryam"]<<" "<<m.size()<<endl;
  for(auto p:m)
    cout<<p.first<<" "<<p.second<<endl;
}
