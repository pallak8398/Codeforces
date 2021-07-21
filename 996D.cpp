#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n,i,j,k;
	cin>>n;
	ll A[2*n],ans=0;
	for(i=0;i<2*n;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<2*n;i++)
	{
		for(j=i+1;j<(2*n);j++)
		{
			if(A[i]==A[j])
			{
				while(j>i+1)
				{
					swap(A[j],A[j-1]);
					j--;
					ans++;
				}
				i++;
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}