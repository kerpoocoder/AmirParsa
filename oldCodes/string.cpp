#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s="amirparsa";//vector<char>
  cout<<s.size()<<endl;
  s+=" rezaee";
  cout<<s<<endl;
  for(int i=0;i<s.size();i++)
    cout<<s[i]<<"-";
  cout<<endl;
  int two='2';
  cout<<two<<endl;
  cout<<s.substr(3,9)<<endl;
  if(s.find("parp")>s.size())
    cout<<"Not exist"<<endl;
  else
    cout<<"Exist"<<endl;
  getline(cin,s);
  cout<<s<<endl;
}
