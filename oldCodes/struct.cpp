#include<iostream>
#include<algorithm>
using namespace std;

struct student{
  int ghad;
  int vazn;
  string name;
  string lastname;
  string full_name()
  {
    return name+" "+lastname;
  }
};
bool cmp(student a,student b)
{
  if(a.ghad<b.ghad)
    return true;
  if(a.ghad>b.ghad)
    return false;
  if(a.vazn<b.vazn)
    return true;
  if(a.vazn>b.vazn)
    return false;
  return a.full_name()<b.full_name();
}
int main()
{
  int n;
  student a[100];
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i].ghad>>a[i].vazn>>a[i].name>>a[i].lastname;
  sort(a+1,a+n+1,cmp);
  for(int i=1;i<=n;i++)
    cout<<a[i].full_name()<<endl;
}
