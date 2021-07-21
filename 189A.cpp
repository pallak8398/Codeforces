#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c,ans=0;
	cin>>n>>a>>b>>c;
	for(int i=0;i*a<=n;i++)
	{
		for(int j=0;i*a+j*b<=n;j++)
		{
			int num=(n-i*a-j*b)/c;
			if(i*a+j*b+num*c==n)
			{
				ans=max(ans,(i+j+num));
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}