#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n,i,sum=0;
	cin>>n;
	ll A[n];
	for(i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	// for(i=0;i<n;i++)
	// 	cout<<A[i]<<" ";
	// cout<<endl;
	ll count=0;
	//sum=A[0];
	for(i=0;i<n;i++)
	{
		if(A[i]>=sum)
		{
			count++;
			sum+=A[i];

			//cout<<A[i]<<endl;
		}
	}
	cout<<count<<endl;
	return 0;
}