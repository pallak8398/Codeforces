#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int count=0,ans=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]>0)
		{
			count+=A[i];
		}
		else if(A[i]<0)
		{
			if(count==0)
			{
				ans++;
			}
			else
				count--;
		}
	}
	cout<<ans<<endl;
	return 0;
}