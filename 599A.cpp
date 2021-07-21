#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int d1,d2,d3;
	cin>>d1>>d2>>d3;
	int x1=2*d1+2*d2;
	int x2=d1+d3+d2;
	int x3=d2+d3+d3+d2;
	int x4=d1+d3+d1+d3;
	int ans1=min(x1,x2);
	int ans2=min(x3,x4);
	int ans=min(ans1,ans2);
	cout<<ans;
	return 0;
}