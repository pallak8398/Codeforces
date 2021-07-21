#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int n,i;
	cin>>n;
	long int A[n],B[1000000004],k=0,j,x,y=-1,count=0;
	for(i=0;i<n;i++)
		cin>>A[i];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			x=abs(A[i]-A[j]);
			B[k]=x;
			k++;
			y=max(y,x);
		}
	}
	for(i=0;i<k;i++)
	{
		if(B[i]==y)
			count++;
	}
	cout<<y<<" "<<count<<endl;
	return 0;
	//return 0;
}