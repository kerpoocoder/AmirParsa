#include<iostream>
using namespace std;
int p[100],n;
bool mark[100];
void perm(int i)
{
  if(i==n+1)
    {
      for(int j=1;j<=n;j++)
	cout<<p[j];
      cout<<endl;
      return;
    }
  for(int j=1;j<=n;j++)
    if(!mark[j])
      {
	p[i]=j;
	mark[j]=true;
	perm(i+1);
	mark[j]=false;
      }
}
int main()
{
  cin>>n;
  perm(1);
  
}
