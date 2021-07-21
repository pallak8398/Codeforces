#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	long long int ans=0,x;
	int c='a';
	for(int i=0;i<s.length();i++)
	{
		x=min(abs(s[i]-c),abs(26-abs(s[i]-c)));
		ans+=x;
		c=s[i];
	}
	cout<<ans<<endl;
	return 0;
}