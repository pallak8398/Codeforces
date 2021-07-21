#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int A[6];
	for(int i=0;i<6;i++)
	{
		A[i]=0;
	}
	while(n--)
	{
		string s;
		cin>>s;
		if(s=="purple")
			A[0]=1;
		else if(s=="green")
			A[1]=1;
		else if(s=="blue")
			A[2]=1;
		else if(s=="orange")
			A[3]=1;
		else if(s=="red")
			A[4]=1;
		else if(s=="yellow")
			A[5]=1;
	}
	int count=0;
	for(int i=0;i<6;i++)
	{
		if(A[i]>0)
			count++;
	}
	cout<<6-count<<endl;
	for(int i=0;i<6;i++)
	{
		if(A[i]==0)
		{
			if(i==0)
				cout<<"Power"<<endl;
			else if(i==1)
				cout<<"Time"<<endl;
			else if(i==2)
				cout<<"Space"<<endl;
			else if(i==3)	
				cout<<"Soul"<<endl;
			else if(i==4)
				cout<<"Reality"<<endl;
			else if(i==5)
				cout<<"Mind"<<endl;
		}
	}
	return 0;
}