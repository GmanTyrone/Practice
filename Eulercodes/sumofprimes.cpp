#include <iostream>
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int isprime(long long int n)
{
    long long int i;
    if(n==1)return 0;
    for(i=2; i<=n/2;++i){if(n%i==0)return 0;}
    return 1;
}

int1024_t sumprimes(int1024_t x)
{
    int1024_t result=0;
    for(long long int i=0;i<=x;i++){
        if(isprime(i))result+=i;
    }
    return result;
}

int main()
{
    int1024_t result=sumprimes(2000000);
    cout<<"sum of primes up until 2 million: "<<result<<endl;
    return 0;
}
