#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int n,i;
	cin>>n;
	long long int A[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	long long int maxi=-9999999999,mini=9999999999;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			mini=abs(A[i]-A[i+1]);
			maxi=abs(A[i]-A[n-1]);
		}
		else if(i==n-1)
		{
			mini=abs(A[i]-A[i-1]);
			maxi=abs(A[i]-A[0]);
		}
		else
		{
			mini=min(abs(A[i]-A[i-1]),abs(A[i]-A[i+1]));
			maxi=max(abs(A[i]-A[0]),abs(A[i]-A[n-1]));
		}
		cout<<mini<<" "<<maxi<<endl;
	}
	return 0;
}