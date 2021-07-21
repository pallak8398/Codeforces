#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n,d;
	cin>>n>>d;
	ll A[n];
	for(ll i=0;i<n;i++)
		cin>>A[i];
	ll x=A[0];
	ll y=A[n-1];
	int flag=0;
	ll count=0;
	for(ll i=0;i<n-1;i++)
	{
		ll x=abs(A[i]-A[i+1]);
		if(x>(2*d))
		{
			count+=2;
		}
		else if(x==(2*d))
			count++;
		
	}
	//cout<<endl;
	cout<<count+2<<endl;
	return 0;
}