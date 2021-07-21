#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,a3,b1,b2,b3,n;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
	int ans=0;
	int sum1=a1+a2+a3;
	int sum2=b1+b2+b3;
	ans+=(sum1/5);
	if(sum1%5!=0)
		ans++;
	ans+=(sum2/10);
	if(sum2%10!=0)
		ans++;
	if(ans>n)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}