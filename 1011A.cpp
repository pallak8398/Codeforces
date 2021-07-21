#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	//cout<<s<<endl;
	long int sum=0;
	sum=(s[0]-'a')+1;
	char x=s[0];
	int c=1;
	for(int i=1;i<s.length();i++)
	{
		if(c==k)
			break;
		if(((int)s[i]-(int)x)>=2)
		{
			sum+=(s[i]-'a'+1);
			x=s[i];
			c++;
		}
		// else
		// 	c++;
	}
	if(c==k)
		cout<<sum<<endl;
	if((c==1 && k>1)||(c!=k))
	{
		cout<<"-1"<<endl;
		return 0;
	}
	
	return 0;
}