#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;


int iseven(int1024_t a)
{
    if(a%2) return 0;
    return 1;
}

int1024_t CollatzTransform(int1024_t a)
{
    if(iseven(a)) return a/2;
    return (3*a+1);
}

int main(void)
{
    int1024_t maxcount=0;
    int1024_t maxnumb=1;
    for(int1024_t i=1;i<=1000000;i++)
    {
        int1024_t count=0;
        int1024_t j=i;
        while(j!=1)
        {
            j=CollatzTransform(j);
            count++;
        }
        if(maxcount<count)
        {
            maxcount=count;
            maxnumb=i;
        }
    }
    cout<<"max Collatz transformations: "<< maxnumb;
    return 0;
}
