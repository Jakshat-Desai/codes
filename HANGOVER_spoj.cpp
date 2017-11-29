#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        float x;
        cin>>x;
        if(x==0)
        {
            break;
        }
        float k;
        int count_=0;
        for(int i=2;;i++)
        {
            k=1.0/i;
            count_++;
            if(x<k)
                break;
            x-=k;
        }
        cout<<count_<<" card(s)\n";
    }
}
