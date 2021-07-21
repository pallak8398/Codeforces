#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int tot_ml=k*l;
	int tot_lime=c*d;
	int x=tot_ml/nl;
	int y=p/np;
	int z=min(x,y);
	int ans=min(z,tot_lime);
	ans=ans/n;
	cout<<ans<<endl;
	return 0;
}