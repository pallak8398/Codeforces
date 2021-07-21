#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n],B[n-1],C[n-2];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		//f1[A[i]]++;
	}
	for(int i=0;i<n-1;i++)
	{
		cin>>B[i];
		//f2[B[i]]++;
	}
	for(int i=0;i<n-2;i++)
	{
		cin>>C[i];
		//f3[C[i]]++;
	}
	sort(A,A+n);
	sort(B,B+n-1);
	sort(C,C+n-2);
	int i,j;
	for(i=0;i<n-1;i++)
	{
		if(A[i]!=B[i])
		{
			cout<<A[i]<<endl;
			break;
		}
	}
	if(i==n-1)
	{
		cout<<A[n-1]<<endl;
	}
	for(j=0;j<n-2;j++)
	{
		if(B[j]!=C[j])
		{
			cout<<B[j]<<endl;
			break;
		}
	}
	if(j==n-2)
	{
		cout<<B[n-2]<<endl;
	}
	return 0;
}