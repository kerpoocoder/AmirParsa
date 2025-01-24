#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("input11.txt");
int a[20][20];
int f(int i,int j)
{
  if(i==15)
    return a[i][j];
  return max(f(i+1,j),f(i+1,j+1))+a[i][j];
}
int main()
{
  for(int i=1;i<=15;i++)
    for(int j=1;j<=i;j++)
      fin>>a[i][j];
  cout<<f(1,1)<<endl;
}
