#include<iostream>
using namespace std;
int main()
{
  int x;
  cin>>x;
  if(x<=9 && x>=0)
    cout<<"1 raghami"<<endl;
  else if(x<0)
    cout<<"manfi"<<endl;
  else if(x<100)
    cout<<"2 raghami"<<endl;
  else
    cout<<"bish az 2 raghami"<<endl;
}
