#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int ans=0,count=0;
	while(a!=0)
	{
		a--;
		ans++;
		count++;
		if(count==b)
		{
			count=0;
			a++;
		}
	}
	cout<<ans<<endl;
	return 0;
}