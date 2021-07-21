#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int n,k,i,j;
	cin>>n>>k;
	string s,s1;
	cin>>s;
	int f[26]={0};
	s1=s;
	sort(s1.begin(),s1.end());
	for(i=0;i<k;i++)
	{
		f[s1[i]-'a']++;
	}
	for(i=0;i<n;i++)
	{
		if(f[s[i]-'a']==0)
			cout<<s[i];
		else
			f[s[i]-'a']--;
	}
	cout<<endl;
}