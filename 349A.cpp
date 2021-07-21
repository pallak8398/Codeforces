#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,num,i,flag=0;
	map<int,int>m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		if(num==25)
		{
			m[25]++;
		}
		else if(num==50)
		{
			m[50]++;
			m[25]--;
		}
		else if(num==100)
		{
			if(m[50]>0 && m[25]>0)
			{
				m[50]--;
				m[25]--;
				m[100]++;
				
			}
			else
			{
				m[25]=m[25]-3;
				m[100]++;
			}
		}
		if(m[25]<0 || m[50]<0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		
	}
		cout<<"YES"<<endl;
	return 0;
}