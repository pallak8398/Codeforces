#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n,x,ans,a[1000009],b[1000009],i,j;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
		cin>>s[i];
	for(i=0;i<n;i++)
	{
		x=0;
		for(j=0;j<s[i].size();j++)
		{
			if(s[i][j]=='(')
				x++;
			else if(s[i][j]==')')
				x--;
			if(x<0)
				break;
		}
		if(x>=0)
		{
			a[x]++;
		}
	}
	for(i=0;i<n;i++)
	{
		x=0;
		for(j=s[i].size();j>=0;j--)
		{
			if(s[i][j]==')')
				x++;
			else if(s[i][j]=='(')
				x--;
			if(x<0)
				break;
		}
		if(x>=0)
			b[x]++;
	}
	for(i=0;i<1000009;i++)
		ans+=a[i]*b[i];
	cout<<ans<<endl;
	return 0;
}