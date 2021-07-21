#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n,k;
	map<ll,ll>mp;
	map<ll,ll>::iterator it;
	cin>>n>>k;
	ll A[n],temp[n];
	for(ll i=0;i<n;i++)
	{
		cin>>A[i];
		temp[i]=A[i];
	}
	sort(temp,temp+n,greater<int>());
	ll total=0;
	for(ll i=0;i<k;i++)
	{
		total+=temp[i];
		mp[temp[i]]++;
	}
	ll x=k;
	cout<<total<<endl;
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		if(x==1)
		{
			cout<<n-i<<endl;
			break;
		}
		else{
		it=mp.find(A[i]);
		if(it!=mp.end() && it->second!=0)
		{
			mp[A[i]]--;
			x--;
			cout<<ans+1<<" ";
			ans=0;
		}
		else if(it!=mp.end() && it->second==0)
		{
			ans++;
		}
		else
			ans++;
		} 
	}
	return 0;
}