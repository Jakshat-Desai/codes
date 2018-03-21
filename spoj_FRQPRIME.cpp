#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
void sieve(long long int n, vector<long long int> &primes, bitset<MAX> nos)
{
    for(int i=2;i<=n;i++) if(!nos[i]) {primes.push_back(i);}
}
int main()
{
    int t;cin>>t;
    bitset<MAX> p; p.set(0); long long int x,y;
    for(x=2;x<MAX-1;x++) if(!p[x]) for(y=x*x;y<=MAX-1;y+=x) p[y]=1;
    vector<int> difference; y=2;
    difference.push_back(0);
    for(x=3;x<MAX-1;x++) if(!p[x]){difference.push_back(x-y-1); y=x;}
    for(;t>0;t--)
    {
        long long int n,m; cin>>n>>m;
        vector<long long int> primes; sieve(n,primes,p);
        if(primes.size()<m){cout<<"0\n";continue;}
        long long int vals=0;
        if(m>0){
            for(int i=0;i<=primes.size()-m;i++)
            {
               int x=difference[i]+1;
                vals+=(n-primes[i+m-1]+1)*x;
            }
        }
        else
        {
            vals=n*(n-1)/2;
        }
        cout<<vals<<"\n";
    }
}
/*
Logic:
lets consider the test case 
1
9 2

Now the numbers we have are:
2 3 4 5 6 7 8 9 out of which 2 3 5 7 are prime.

Now the smallest ranges consisting of two prime numbers are:
[2,3],[3,5],[5,7]

I)lets consider [5,7]. Now the ranges which consist [3,7] as their subset are:
1)5,6,7
 2)4,5,6,7
3)5,6,7,8
 4)4,5,6,7,8
5)5,6,7,8,9
 6)4,5,6,7,8,9
Thus we see that we the basic subset [5,7] in each of the above ranges.
Each of the above ranges are of the form: 
__(all possible numbers after the prime no. just preceeding 5)__[5,7]__(all possible numbers from uptil n)__

all possible numbers after 3 and before 5 = 2( 4 and 5)
all possible numbers from 7 uptil n = 3(7,8 and 9)
Therefore total number of cases for set [5,7] are 2*3=6

II)Now let us consider [3,5]. Now ranges which consist of [3,5] as their subset are:
1)3,4,5
2)3,4,5,6
3)3,4,5,6,7
4)3,4,5,6,7,8
5)3,4,5,6,7,8,9
The form still remains as follows:
__(all possible numbers after the prime no. just preceeding 3)__[3,5]__(all possible numbers from 5 uptil n)__
However you might notice that in case of 3),4) and 5) we are also getting an extra prime number in our set, i.e we are getting
ranges with more than two prime numbers. The reason for doing this is that our form(that has been written above) wont change and it would also
cover the sets with more than m(given value of min number of prime numbers in range) number of prime numbers in range. Note that there
would be no repeatitions as the starting point and ending point of the range would never be same for two ranges. I.e the starting point
would differ if ending points are same. The vice versa is obvious.

Hence looking for 
__(all possible numbers after the prime no. just preceeding prime[i])__[prime[i],prime[i+m-1]]__(all possible numbers from prime[i+m-1] uptil n)__
in all possible [prime[i],prime[i+m-1]] sets and adding the product 
(all possible numbers after the prime no. just preceeding prime[i])*(all possible numbers from prime[i+m-1] uptil n)
to the sum for each set would give us the total number of required frequent prime ranges.
*/
