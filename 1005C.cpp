#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n;
	cin>>n;
	ll A[n],i,j,x,a,b,ans=0;
	map<ll,ll>mp,f;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		mp[A[i]]=i;
		f[A[i]]++;
	}
	map<ll,ll>::iterator it;
	int flag=0;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<32;j++)
		{
			x=pow(2,j)-A[i];
			if(x==A[i] && f[A[i]]==1)
				continue;
			else if(x==A[i] && f[A[i]]>1)
			{
				flag=1;
				break;
			}
			else
			{
				it=mp.find(x);
				if(it==mp.end())
					continue;
				else
				{
					a=it->first;
					b=it->second;
					if(b==i)
						continue;
					else if(b!=i)
					{
						flag=1;
						break;
					}
				}
			}
		}
		if(flag==0)
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}