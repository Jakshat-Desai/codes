#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        float l;
        cin>>l;
        if(!l)
            break;
        float r=l/3.14159;
        cout.setf( std::ios::fixed, std:: ios::floatfield );
        cout.precision(2);
        cout<<3.14159*r*r/2<<"\n";
    }
}
