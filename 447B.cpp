#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int k,A[26]={0},max=0;
	cin>>k;
	for(int i=0;i<26;i++)
	{
		cin>>A[i];
		if(A[i]>=max)
		{
			max=A[i];
		}
	}
	int ans=0;
	for(int i=0;i<s.length();i++)
	{
		ans+=A[s[i]-'a']*(i+1);
	}
	for(int i=s.length();i<s.length()+k;i++)
	{
		ans+=max*(i+1);
	}
	cout<<ans<<endl;
	return 0;
}