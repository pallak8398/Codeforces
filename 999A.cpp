#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,k,i,j;
	cin>>n>>k;
	int A[n];
	for(i=0;i<n;i++)
		cin>>A[i];
	i=0;
	j=n-1;
	int count=0;
	while(i<j)
	{
		if(A[i]>k && A[j]>k)
			break;
		
		else{
		if(A[i]<=k)
		{
			i++;
			count++;
		}
		if(A[j]<=k)
		{
			j--;
			count++;
		}
		}
	}
	if(i==j)
	{
		if(A[i]<=k)
			count++;
	}
	cout<<count<<endl;
	return 0;
}