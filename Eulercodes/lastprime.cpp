#include <iostream>
#include <bits/stdc++.h>
#include "isprime.h"

using namespace std;

int isprime(long long int n)
{
    long long int i;
    if(n==1)return 0;
    for(i=2; i<=n/2;++i){if(n%i==0)return 0;}
    return 1;
}

long long int lastprime(long long int x)
{
    long long int result=1,i=2;
    long long int target=x;
    while(target!=1){
        if(isprime(i)&&x%i==0)target/=i;
        ++i;
    }
    result=i-1;
    return result;
}

int main()
{
    auto result=0;
    result=lastprime(600851475143);
    cout<<"last prime is: "<<result<<endl;
    return 0;
}