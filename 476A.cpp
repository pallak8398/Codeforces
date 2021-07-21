#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int moves=0;
	if(n%2==0)
	{
		moves=n/2;
	}
	else
		moves=n/2+1;
	int i=moves;
	while(i<=n)
	{
		if(i%m==0)
		{
			cout<<i<<endl;
			return 0;
		}
		i++;
	}
	cout<<"-1"<<endl;
	return 0;
}