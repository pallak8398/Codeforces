#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,m,z;
	cin>>n>>m>>z;
	int A[10004]={0};
	for(int i=n;i<=z;i=i+n)
		A[i]=1;
	long long int ans=0;
	for(int i=m;i<=z;i=i+m)
	{
		if(A[i]==1)
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}