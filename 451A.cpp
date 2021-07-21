#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,no_points;
	cin>>m>>n;
	int mini=min(m,n);
	if(mini%2==0)
		cout<<"Malvika"<<endl;
	else
		cout<<"Akshat"<<endl;
	return 0;
}