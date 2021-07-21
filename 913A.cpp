#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int num=pow(2,n);
	int ans=m%num;
	cout<<ans<<endl;
	return 0;
}