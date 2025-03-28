#include<iostream>
using namespace std;

template <typename T>
void prt(T x)
{
  cout<<x<<endl;
}

template <typename T,typename S>
class vector{
  
};

int main()
{
  prt(10);
  prt("aaa");
  vector<int,string> v;
}
