#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s,t;
	cin>>s>>t;
	long long int n1=s.length();
	long long int n2=t.length();
	reverse(s.begin(),s.end());
	reverse(t.begin(),t.end());
	//cout<<s<<endl<<t<<endl;
	long long int i=0,j=0,count=0;
	while(i<n1 && j<n2)
	{
		if(s[i]==t[j])
		{
			//cout<<s[i]<<" "<<t[j]<<endl;
			count++;
			i++;
			j++;
			// s[i]='.';
			// t[j]='.';
		}
		else if(s[i]!=t[j])
		{
			break;
		}
	}
	//cout<<count<<endl;
	long long int ans;
	// for(int i=0;i<s.length()-1;i++)
	// {
	// 	if(s[i]!='.')
	// 		ans++;
	// }
	// for(int j=0;j<t.length();j++)
	// {
	// 	if(t[j]!='.')
	// 		ans++;
	// }
	ans=(n1-count)+(n2-count);
	cout<<ans<<endl;
	return 0;
}