#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,L,a,t=0,l,r;
	cin>>n>>L>>a;
	int tot=0;
	for(int i=0;i<n;i++)
	{
		cin>>l>>r;
		tot+=(l-t)/a;
		t=l+r;
	}
	tot+=(L-t)/a;
	cout<<tot<<endl;
	return 0;
}