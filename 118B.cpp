#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int i,j,n;
	cin>>n;
	vector<string>v;
	for(int i=0;i<n+1;i++)
	{
		string ans="";
		for(j=0;j<n-i;j++)
		{
			ans+=' ';
			ans+=' ';
		}
		for(j=0;j<i;j++)
		{
			ans+=('0'+j);
			ans+=' ';
		}
		ans+=('0'+i);
		ans+=' ';
		for(j=i-1;j>=0;j--)
		{
			ans+=('0'+j);
			ans+=' ';
		}
		for(j=0;j<n-i;j++)
		{
			ans+=' ';
			ans+=' ';
		}
		while(ans.size()>0 && ans[ans.length()-1]==' ')
		{
			ans=ans.substr(0,ans.length()-1);
			
		}
		cout<<ans<<endl;
		v.push_back(ans);
	}
	v.pop_back();
	for(i=n-1;i>=0;i--)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}