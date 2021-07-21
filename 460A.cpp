#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,count=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		if(i%m==0)
			n++;
		count++;
	}
	cout<<count<<endl;
	return 0;
}