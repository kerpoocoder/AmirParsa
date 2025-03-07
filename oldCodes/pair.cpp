#include<iostream>
using namespace std;
int main()
{
  pair<int,string> p;
  p.first=10;
  p.second="parsa";
  p=make_pair(11,"rezaee");
  cout<<p.first<<" "<<p.second<<endl;
  pair<pair<int,int> , string>q,r;
  q.first.first=10;
  q.first.second=11;
  q.second="parsa";
  //q=make_pair(make_pair(10,11),"parsa")
}
//(20,"Parsa")<(20,"Rezaee")
