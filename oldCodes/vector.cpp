#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> x(100,2);
  cout<<x.size()<<endl;
  x.push_back(10);
  cout<<x[0]<<" "<<x.size()<<endl;
  for(int i=2;i<=20;i+=3)
    x.push_back(i);
  x.pop_back();
  x.resize(20);
  cout<<x.size()<<endl;
  
}
