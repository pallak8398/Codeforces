#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n],t1=0,t2=0,t3=0;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
		if(A[i]==1)
		{
			t1++;
			v1.push_back(i);
		}
		else if(A[i]==2)
		{
			t2++;
			v2.push_back(i);
		}
		else if(A[i]==3)
		{
			t3++;
			v3.push_back(i);
		}
	}
	int y=min(min(t1,t2),t3);
	cout<<y<<endl;
	for(int i=0;i<y;i++)
	{
		cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
	}
	return 0;
}