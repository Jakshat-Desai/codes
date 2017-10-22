#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x;
long long int i,j,k;
cin>>x;
long long int z=1000000;
bool p[z+1];
memset(p,false,sizeof(bool)*(z+1));
for(i=2;i<z;i++)
{
    if(!p[i])
    {
        for(j=i*i;j<=z;j+=i)
        {
            p[j]=true;
        }
    }
}
p[0]=1;
p[1]=1;
for(;x>0;x--)
{
long long int m,n;
cin>>m>>n;
bool q[n-m+1];
memset(q,false,sizeof(bool)*(n-m+1));
vector<int> v;
vector<int>::iterator it;
int sq=(int)sqrt(n);
for(i=0;i<=sq+1;i++)
{
    if(!p[i])
    v.push_back(i);
}
for(it=v.begin();it!=v.end();it++)
{
    j=(m/(*it))*(*it);
    if(j<m)
        j+=*it;
    if(j==*it)
        j+=*it;
   for(k=j;k<=n;k+=*it)
   {
       q[k-m]=1;
   }
}
if(m==1)q[0]=1;
for(i=0;i<=n-m;i++){
    if(!q[i])
        cout<<i+m<<endl;
}
cout<<endl;
}
}
