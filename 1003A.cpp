#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	int A[n],f[101];
	for(int i=0;i<=101;i++)
		f[i]=0;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		f[A[i]]++;
	}
	if(n==0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	if(n==1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	int ans=-1;
	for(int i=0;i<=101;i++)
	{
		ans=max(ans,f[i]);
	}
	cout<<ans<<endl;
	return 0;
}