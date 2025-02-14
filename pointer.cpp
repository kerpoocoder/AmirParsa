#include<iostream>
using namespace std;
int main()
{
  long long x=10;
  cout<<*(&x)<<endl;
  int a[100]={3,4,2,4,5,3,21,15,6,3,9};
  cout<<a[8]<<" "<<*(&(*(a+8)))<<endl;
}
