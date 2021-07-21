#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<string,int> &a,
              const pair<string,int> &b)
{
    return (a.second < b.second);
}
int substring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return 1;
    }
 
    return 0;
}
int main()
{
	int n;
	cin>>n;
	//compare c;
	vector<pair<string,int>>v;
	//vector<pair<string,int>>::iterator it;
	string str;
	while(n--)
	{
		cin>>str;
		v.push_back({str,str.length()});
	}
	sort(v.begin(),v.end(),compare);
	/*for(int i=0;i<v.size();i++)
		cout<<v[i].first<<endl;*/
	int flag=0;
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(substring(v[i].first,v[j].first)==0)
			{
				flag=1;
				break;
			}
			
		}
		if(flag==1)
			break;
	}
	if(flag==1)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<"YES"<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i].first<<endl;
	return 0;
}