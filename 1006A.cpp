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
	for(ll i=0;i<n;i++)
	{
		if(A[i]%2!=0)
		{
			cout<<A[i]<<" ";
		}
		else
		{
			cout<<A[i]-1<<" ";
		}
	}
	cout<<endl;
	return 0;
}