#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int a[100]={2,3,1,4,5,6,7,8,9,10};
  do{
    for(int i=0;i<4;i++)
      cout<<a[i]<<" ";
    cout<<endl;
  }while(next_permutation(a,a+4));
    for(int i=0;i<4;i++)
      cout<<a[i]<<" ";
    cout<<endl;

}
