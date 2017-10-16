#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s1;
    map<int,int> m;
    int i,x,l;
    string s;
    cin>>l;
    int z=0;
    for(i=0;i<l;i++)
    {
        cin>>s>>x;
        if(s=="insert" && m[x]==0)
        {
            m[x]=1;
            z++;
            s1.insert(x);
        }
        else if(s=="insert")
        {
            m[x]+=1;
            z++;
            s1.insert(x);
        }
        if(s=="delete" && m[x]>0)
        {
            m[x]-=1;
            z--;
            if(m[x]==0)
            {
                s1.erase(x);
            }
        }
        if(s1.size()==z && (z==1||z==0))
        {
            cout<<"neither\n";
        }
        else if(s1.size()==1 && z>1)
        {
            cout<<"homo\n";
        }
        else if(s1.size()==z && z>1)
        {
            cout<<"hetero\n";
        }
        else
        {
            cout<<"both\n";
        }
    }
}
