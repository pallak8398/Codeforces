#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int n,i,l,r;
	cin>>n;
	long int A[n],B[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		B[i]=A[i];
	}
	for(i=0;i<n-1;i++)
	{
		if(A[i]>A[i+1])
		{
			l=i;
			break;
		}
	}
	for(i=n-1;i>0;i--)
	{
		if(A[i]<A[i-1])
		{
			r=i;
			break;
		}
	}
	reverse(A+l,A+r+1);
	sort(B,B+n);
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(A[i]!=B[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"no"<<endl;
		return 0;
	}
	cout<<"yes"<<endl;
	cout<<l+1<<" "<<r+1<<endl;
	return 0;
}