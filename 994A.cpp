#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,m;
	cin>>n>>m;
	int A[n],B[m];
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=0;i<m;i++)	
		cin>>B[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(A[i]==B[j])
				cout<<A[i]<<" ";
		}
	}
	cout<<endl;
	return 0;
}