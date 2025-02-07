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
}
