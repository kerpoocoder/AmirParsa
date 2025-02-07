#include<iostream>
using namespace std;
int a[100],b[100],n;
void merge_sort(int l,int r)
{
  if(l==r)
    return;
  int mid=(l+r)/2;
  merge_sort(l,mid);
  merge_sort(mid+1,r);
  int p=l,q=mid+1;
  for(int i=l;i<=r;i++)
    {
      if(q>r)
	{
	  b[i]=a[p];
	  p++;
	}
      else if(p>mid)
	{
	  b[i]=a[q];
	  q++;
	}
      else if(a[p]<a[q])
	{
	  b[i]=a[p];
	  p++;
	}
      else
	{
	  b[i]=a[q];
	  q++;
	}
    }
  for(int i=l;i<=r;i++)
    a[i]=b[i];
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  merge_sort(1,n);
  for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
}
