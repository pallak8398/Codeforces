#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string n,ans="";
	cin>>n;
	ans+=n;
	reverse(n.begin(),n.end());
	ans+=n;
	cout<<ans<<endl;
	return 0;
}