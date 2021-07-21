#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0,x;
	string a,b;
	cin>>a>>b;
	for(int i=0;i<n;i++)
	{
		x=min(abs(a[i]-b[i]),(9-max(a[i],b[i]))+min(a[i],b[i])+1);
		count+=x;
	}
	cout<<count<<endl;
	return 0;
}