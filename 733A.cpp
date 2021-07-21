#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	int l,r,i;
	int x=1;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
		{
			l=i;
			break;
		}
	}
	for(int j=i+1;j<s.length();j++)
	{
		if(s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U' || s[j]=='Y')
		{
			r=j;
			x=max(x,abs(r-l));
			l=r;
		}
		
	}
	cout<<x<<endl;
	return 0;
}