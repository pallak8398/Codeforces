#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int count=0,ans=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]+k<=5)
			count++;
	}
	cout<<count/3<<endl;
	return 0;
}