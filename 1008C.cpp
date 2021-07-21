#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() 
{
	ll n;
	cin>>n;
	ll A[n];
	ll vis[n]={0};
	for(ll i=0;i<n;i++)
	{
		cin>>A[i];
	}
	ll x=A[0];
	int flag=0;
	for(ll i=1;i<n;i++)
	{
		if(A[i]!=A[0])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	sort(A,A+n);
	ll count=0;
	for(ll i=n-1;i>=0;i--)
	{
		for(ll j=i-1;j>=0;j--)
		{
			if(A[i]!=A[j] && A[j]<A[i] && vis[j]==0)
			{
				count++;
				vis[j]=1;
				break;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}