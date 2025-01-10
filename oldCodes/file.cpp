#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("inputsum.txt");
ofstream fout("outputsum.txt");
int sum(int x,int y)
{
  return x+y;
}
int main()
{
  int x,y;
  fin>>x>>y;
  fout<<sum(x,y)<<endl;
}
