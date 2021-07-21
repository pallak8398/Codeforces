#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n,i;
	cin>>n;
	ll A[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	ll ans=999999999,p,l,res;
	for(i=1;i<=n;i++)
	{
		A[i]=A[i]-i+1;
		l=(A[i]+n-1)/n;
		if(l<ans)
		{
			ans=l;
			res=i;
		}
	}
	cout<<res<<endl;
	return 0;
}