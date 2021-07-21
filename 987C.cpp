#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int n,i,j,k,x,ans1=9999999999,sum=999999999,ans=9999999999;
	cin>>n;
	long long int A[n],C[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>C[i];
	}
	int flag=0;
	for(i=1;i<n-1;i++)
	{
		/*for(j=0,k=i+1;j<i && k<n;j++,k++)
		{
			if(A[j]<A[i] && A[i]<A[k] && A[j]<A[k])
			{
				flag=1;
				x=C[i]+C[j]+C[k];
				ans=min(ans,x);
			}
		}*/
		ans1=C[i];
		long long int ans2=9999999999;
		long long int ans3=9999999999;
		for(j=0;j<i;j++)
		{
			if(A[j]<A[i])
			{
				ans2=min(ans2,C[j]);
			}
		}
		for(k=i+1;k<n;k++)
		{
			if(A[i]<A[k])
			{
				flag=1;
				ans3=min(ans3,C[k]);
			}
		}
		sum=ans1+ans2+ans3;
		ans=min(ans,sum);
	}
	if(flag==0)
	{	cout<<"-1"<<endl;
		return 0;
	}
	cout<<ans<<endl;
	return 0;
}