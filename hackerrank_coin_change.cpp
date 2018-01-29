#include<bits/stdc++.h>
using namespace std;

long long int count(vector<int> v,int tot, int m)
{
    long long int sumdata[tot+1][m];
    for(int j=0;j<m;j++)
    {
        //no matter how many denominations we use, the sum 0 can be generated only in one way
        sumdata[0][j]=1;
    }
    long long int inc,exc;
    for(int i=1;i<=tot;i++)
    {
        for(int j=0;j<m;j++)
        {
            //total number of ways in which the sum can be generated when at least one v[j] coin is necessarily used
            inc=(i-v[j]>=0)?sumdata[i-v[j]][j]:0;
            //total number of ways in which the sum can be generated using the coins from v[0] to v[j-1] only
            exc=(j>=1)?sumdata[i][j-1]:0;
            //total number of ways in which sum i can be generated using coins from v[0]to v[j]
            sumdata[i][j]=inc+exc;
        }
    }
    return sumdata[tot][m-1];
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int m,n;
    cin>>n>>m;
    vector<int> coins(m);
    for(int i=0;i<m;i++)
    {
        cin>>coins[i];
    }
    cout<<count(coins,n,m);
    return 0;
}
