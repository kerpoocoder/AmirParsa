#include<iostream>
#include<set>
using namespace std;
set<int>s;
int main()
{
  s.insert(10);
  s.erase(5);
  cout<<s.size()<<endl;
  for(int i=1;i<=20;i+=3)
    s.insert(i);
  cout<<s.size()<<endl;
  if(s.find(7)==s.end())
    cout<<"Nist"<<endl;
  else
    cout<<"Hast"<<endl;
  for(auto x:s)
    cout<<x<<" ";
}
