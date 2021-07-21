#include<bits/stdc++.h>
using namespace std;
#define li long int
int main()
{
	li n,i;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		//vector<int>v;
		li idx1,idx2,idx;
		for(li i=0;i<s.length();i++)
		{
			if(isdigit(s[i]))
			{
				idx1=i;
				break;
			}
		}
		for(li i=0;i<s.length();i++)
		{
			if(isalpha(s[i]))
			{
				idx2=i;
				//break;
			}
		}
		li sum=0;
		if(idx1>idx2)
		{
			for(li i=0;i<idx1;i++)
			{
				sum+=pow(26,(idx1-i-1))*(s[i]-'A'+1);
			}
			cout<<"R";
			for(li i=idx1;i<s.length();i++)
				cout<<s[i];
			cout<<"C"<<sum<<endl;
		}
		else
		{
			for(li i=0;i<s.length();i++)
			{
				if(s[i]=='C')
				{
					idx=i;
					break;
				}
			}
			string v="";
			for(li i=idx+1;i<s.length();i++)
				v+=s[i];
			string ans="";
			li num,p;
			istringstream(v)>>num;
			while(num!=0)
			{
				p=num%26;
				num/=26;
				if(p==0)
				{
					p=26;
					num--;
				}
				ans=char(p-1+'A')+ans;
			}
			cout<<ans;
			for(li i=1;i<idx;i++)
			{
				cout<<s[i];
			}
			cout<<endl;
		}
	}
	return 0;
}