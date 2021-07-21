#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n;
	cin>>n;
	ll A[n],i,j,sum1=0,sum2=0,ans=0;
	for(i=0;i<n;i++)
		cin>>A[i];
	i=0;
	j=n-1;
	while(1)
	{
		if(j<i)
			break;
		
		if(sum1>sum2)
		{
			sum2+=A[j];
			j--;
		}
		if(sum1<sum2)
		{
			sum1+=A[i];
			i++;
		}
		if(sum1==sum2)
		{
			ans=sum1;
			sum1+=A[i];
			i++;
		}
	}
	cout<<ans<<endl;
}