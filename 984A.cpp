#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int n,i,pos;
	cin>>n;
	long int A[n];
	for(i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	sort(A+1,A+n+1);
	if(n%2!=0)
	{
		pos=(n/2)+1;
		cout<<A[pos]<<endl;
	}
	else
	{
		pos=n/2;
		cout<<A[pos]<<endl;
	}
	return 0;
}