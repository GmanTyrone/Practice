#include <iostream>
#include <bits/stdc++.h>
#include "isprime.h"
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int1024_t sumprimes(int1024_t x)
{
    int1024_t result=0;
    for(long long int i=0;i<=x;i++){
        if(isprime(i))result+=i;
    }
    return result;
}
