#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,k,w,cost=0;
	cin>>k>>n>>w;
	for(int i=1;i<=w;i++)
	{
		cost+=(i*k);
	}
	int ans=cost-n;
	if(ans<0)
		cout<<"0"<<endl;
	else
		cout<<ans<<endl;
	return 0;
}	