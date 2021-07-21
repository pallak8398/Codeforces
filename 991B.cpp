#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int A[n],sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		sum+=A[i];
	}
	int count=0;
	sort(A,A+n);
	while(sum<(4.5*(double)n))
	{
		sum=sum-A[0];
		A[0]=5;
		sum+=5;
		sort(A,A+n);
		count++;
	}
	cout<<count<<endl;
	return 0;
}