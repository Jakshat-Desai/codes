#include<bits/stdc++.h>
#define z 100000000
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bitset<z> p;
    p.set(0);
    long long int i,j;
    for(i=2;i<z-1;i++)
    {
        if(!p[i])
        for(j=i*i;j<=z-1;j=j+2*i)
        {
            p[j]=1;
        }
    }
    j=2;
    cout<<"2\n";
    for(i=3;i<z;i+=2)
    {
        if(!p[i])
        {
        	if(j%100==1)
            cout<<i<<"\n";
            j++;
        }
    }
}
