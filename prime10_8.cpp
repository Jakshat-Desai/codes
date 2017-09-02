#include<bits/stdc++.h>
#define z 100000000
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool p[z];
    long long int i,j;
    for(i=2;i<z-1;i++)
    {
        if(!p[i])
        for(j=i*i;j<=z-1;j=j+i)
        {
            p[j]=true;
        }
    }
    j=1;
    for(i=2;i<z;i++)
    {
        if(!p[i] && j%100==1)
        {
            cout<<i<<"\n";
            j++;
        }
    }
}
