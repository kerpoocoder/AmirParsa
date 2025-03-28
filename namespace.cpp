#include<iostream>
#include<vector>
using namespace std;
namespace parsa{
  int x=10;
  namespace rezaee{
    int y;
  }
}
int main()
{
  int vector=10;
  std::vector<int>v;
  std::cout<<vector<<std::endl;
  v.push_back(9);
  using namespace parsa::rezaee;
  cout<<x<<endl;
}
