#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int n,i,count=0,ans=0;
	cin>>n;
	long long int A[n];
	//A[0]=0;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		//A[i]+=A[i-1];
	}
	//cout<<A[0]<<" ";
	for(i=1;i<n;i++)
	{
		A[i]+=A[i-1];
	//	cout<<A[i]<<" ";
	}
	//cout<<endl;
	long long int tot=A[n-1];
	//cout<<tot<<endl;
	if(tot%3!=0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	long long int x=tot/3;
	for(i=0;i<n-1;i++)
	{
		if(x*2==A[i])
			ans+=count;
		if(x==A[i])
			count++;
	}
	cout<<ans<<endl;
	return 0;
}