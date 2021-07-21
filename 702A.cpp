#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n,i,ans=1;
	cin>>n;
	ll A[n];
	//A[0]=0;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	ll k=1;
	for(i=1;i<n;i++)
	{
		if(A[i]<=A[i-1])
			k=1;
		else
			k++;
		ans=max(ans,k);
	}
	cout<<ans<<endl;
}