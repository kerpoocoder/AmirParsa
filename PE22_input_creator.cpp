#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("0022_names.txt");
ofstream fout("PE22_input.txt");
int main()
{
  string s;
  fin>>s;
  for(int i=0;i<s.size();i++)
    if(s[i]=='"' || s[i]==',')
      s[i]=' ';
  fout<<s<<endl;  
}
