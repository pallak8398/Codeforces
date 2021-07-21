#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	int A[n],P[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i]>>P[i];
	}
	int minp=999;
	int x,sum=0;
	for(int i=0;i<n;i++)
	{
		if(P[i]<minp)
		{
			minp=P[i];
			//x=A[i]*minp;
		}
		x=A[i]*minp;
		sum+=x;
	}
	cout<<sum<<endl;
	return 0;
}