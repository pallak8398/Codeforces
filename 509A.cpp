#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n][n];
	for(int i=0;i<n;i++)
	{
		A[i][0]=1;
	}
	for(int j=0;j<n;j++)
	{
		A[0][j]=1;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			A[i][j]=A[i-1][j]+A[i][j-1];
		}
	}
	cout<<A[n-1][n-1]<<endl;
	return 0;
}