#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int x,y;
	cin>>x>>y;
	if(x==y)
	{
		cout<<"="<<endl;
		return 0;
	}
	double a=y*log(x);
	double b=x*log(y);
	if(a>b)
		cout<<">"<<endl;
	else if(a<b)
		cout<<"<"<<endl;
	else
		cout<<"="<<endl;
	return 0;
}