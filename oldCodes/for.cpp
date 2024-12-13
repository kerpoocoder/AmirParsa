#include<iostream>
using namespace std;
int main()
{
  for(int x=1,y=100;x<y;x++,y--)
    {
      cout<<x<<" "<<y<<endl;
    }
  int z,cnt=0;
  cin>>z;
  while(z)
    {
      cnt++;
      z/=2;
    }
  cout<<cnt<<endl;

  do{
    cout<<"HI"<<endl;
  }while(false);
}
