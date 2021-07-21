#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,m;
	cin>>m>>n;
	int num,f[101]={0};
	int maxi=0;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		f[num]++;
		maxi=max(maxi,f[num]);
	}
	int x;
	for(int i=1;i<=maxi;i++)
	{
		x=0;
		for(int j=0;j<101;j++)
		{
			x+=(f[j]/i);
		}
		if(x>=m)
			ans=i;
	}
	cout<<ans<<endl;
	return 0;
}