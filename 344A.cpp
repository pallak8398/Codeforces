#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,count=1;
	cin>>n;
	string A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=0;i<n-1;i++)
	{
		if(A[i]!=A[i+1])
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}