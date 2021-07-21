#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int A[6];
	A[0]=a+b+c;
	A[1]=a+(b*c);
	A[2]=(a*b)+c;
	A[3]=a*b*c;
	A[4]=(a+b)*c;
	A[5]=a*(b+c);
	sort(A,A+6);
	cout<<A[5]<<endl;
	return 0;
}