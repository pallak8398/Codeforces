#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,ans;
	cin>>n;
	if(n%2==0)
	{
		ans=n/2-1;
	}
	else
		ans=n/2;
	cout<<ans<<endl;
	return 0;
}