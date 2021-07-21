#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n;
	cin>>n;
	ll w[n],h[n],x;
	for(ll i=0;i<n;i++)
	{
		cin>>w[i]>>h[i];
	}
	if(w[0]>h[0])
		h[0]=w[0];
	for(ll i=1;i<n;i++)
	{
		if(w[i]>h[i-1] && h[i]>h[i-1])
		{
			cout<<"NO"<<endl;
			return 0;
		}
		else
		{
			// ll y=min(w[i],h[i]);
			// if(y<=x)
			// {
			// 	x=y;
			// }
			if(h[i]<=h[i-1] && w[i]<=h[i-1])
			{
				x=max(w[i],h[i]);
				h[i]=x;
			}
			else if(h[i]<=h[i-1] && w[i]>h[i-1])
				continue;
			else if(w[i]<=h[i-1] && h[i]>h[i-1])
				h[i]=w[i];
		}
	}
	cout<<"YES"<<endl;
	return 0;
}