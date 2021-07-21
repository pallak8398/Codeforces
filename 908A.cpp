#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	int count=0,c1=0,c2=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			count++;
	}
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0' || s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8')
			c2++;
		else if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9')
			c1++;
	}
	//int ans=min(count+c1,count+c2);
	int ans=count+c1;
	cout<<ans<<endl;
	return 0;
}