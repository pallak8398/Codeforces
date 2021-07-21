#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,count=1,ans=0;
	cin>>n;
	int A[n],B[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	sort(A,A+n);
	for(int i=0;i<n;i++)
	{
		if(A[i]==A[i+1])
			count++;
		else if(A[i]!=A[i+1])
		{
			count=1;
			ans++;
		}
		B[i]=count;
	}
	int res=B[0];
	for(int i=1;i<n-1;i++)
	{
		res=max(res,B[i]);
	}
	cout<<res<<" "<<ans<<endl;
	return 0;
}