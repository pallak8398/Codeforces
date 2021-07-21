#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n;
	cin>>n;
	ll A[n];
	for(ll i=0;i<n;i++)
		cin>>A[i];
	ll f[100001]={0};
	set<ll>s;
	set<ll>::iterator it;
	ll i,ans=0;
	for(i=n-1;i>=0;i--)
	{
		f[A[i]]=s.size();
		s.insert(A[i]);
	}
	for(it=s.begin();it!=s.end();it++)
	{
		ans+=f[(*it)];
	}
	cout<<ans<<endl;
	return 0;
}