#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int n,l,i;
	cin>>n>>l;
	long int A[n];
	for(i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	double x,maxi=-1;
	for(i=1;i<n;i++)
	{
		x=abs(A[i]-A[i-1]);
		maxi=max(maxi,x);
	}
	double a =max((double)A[0],maxi/2);
	double b=max(a,(double)l-A[n-1]);
	printf("%.9lf",b);
	return 0;
}