#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void merge_sort(int *l,int *r)
{
  if(l>=r)
    return;
  int *mid=l+(r-l)/2;
  merge_sort(l,mid);
  merge_sort(mid+1,r);
  int *p=l,*q=mid+1;
  vector<int>b;
  while(p<=mid || q<=r)
    {
      if(q>r)
	{
	  b.push_back(*p);
	  p++;
	}
      else if(p>mid)
	{
	  b.push_back(*q);
	  q++;
	}
      else if(*p<*q)
	{
	  b.push_back(*p);
	  p++;
	}
      else
	{
	  b.push_back(*q);
	  q++;
	}
    }
  for(int *i=l,j=0;i<=r;i++,j++)
    *i=b[j];
}
int main()
{
  int n;
  cin>>n;
  vector<int>a(n+1);
  for(int i=1;i<=n;i++)
    cin>>a[i];
  sort(a.begin()+1,a.end());
  for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
}
