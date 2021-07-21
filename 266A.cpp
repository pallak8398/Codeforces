#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if((s[i]=='R' && s[i+1]=='R')||(s[i]=='B' && s[i+1]=='B')||(s[i]=='G' && s[i+1]=='G'))	
			count++;
	}
	cout<<count<<endl;
	return 0;
}