#include <iostream>
#include <bits/stdc++.h>
#include "isprime.h">

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
