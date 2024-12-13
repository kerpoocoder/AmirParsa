#include<iostream>
using namespace std;
int main()
{
  int a[100];
  a[4]=5;
  a[4]++;
  for(int i=0;i<100;i++)
    cout<<a[i]<<endl;
  int b[10][10];
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      cin>>b[i][j];
}
