#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	string s=s1+s2;
	int f1[26]={0},f2[26]={0},flag=0;
	for(int i=0;i<s.length();i++)
		f1[s[i]-'A']++;
	for(int i=0;i<s3.length();i++)
		f2[s3[i]-'A']++;
	for(int i=0;i<26;i++)
	{
		if(f1[i]!=f2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}