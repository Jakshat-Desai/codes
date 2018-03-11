#include<bits/stdc++.h>
using namespace std;
struct job
{
	int st;
	int ed;
};
bool compare(job a, job b)
{
	if(b.ed>a.ed)
	return true;
	return false;
}
int main()
{
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	int n;cin>>n;job j[n];
	for(int i=0;i<n;i++)cin>>j[i].st>>j[i].ed;
	sort(j,j+n,compare);
	int num=1;int k=0;
	for(int i=1;i<n;i++)if(j[i].st>=j[k].ed){k=i;num++;}
	cout<<num<<"\n";
	}
}
