#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	if(n>0)
		cout<<n<<endl;
	else
	{
		int a=(n%10);
		n/=10;
		int b=(n%10);
		n/=10;
		cout<<n*10+max(a,b)<<endl;
	}
	return 0;
}