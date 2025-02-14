#include<iostream>
using namespace std;
const int n=1001;
int a[2000][2000],ans;
void f(int x,int y, int i)
{
  if(i>n*n)
    return;
  if(x+y==n+1 || x==y)
    ans+=i;
  a[x][y]=i;
  if(x<=y && x+y<=n+1)
    f(x,y+1,i+1);
  else if(x<y && x+y>n+1)
    f(x+1,y,i+1);
  else if(x>=y && x+y>n+1)
    f(x,y-1,i+1);
  else
    f(x-1,y,i+1);
}
int main()
{
  f(n/2+1,n/2+1,1);
  //for(int i=1;i<=n;i++)
  //for(int j=1;j<=n;j++)
  //  cout<<'\t'<<a[i][j]<<" \n"[j==n];
  cout<<ans<<endl;
}
