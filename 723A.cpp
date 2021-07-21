#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,x3;
	cin>>x1>>x2>>x3;
	int a=abs(x2-x1)+abs(x3-x1);
	int b=abs(x1-x2)+abs(x3-x2);
	int c=abs(x1-x3)+abs(x2-x3);
	int ans1=min(a,b);
	int ans2=min(ans1,c);
	cout<<ans2<<endl;
	return 0;
}