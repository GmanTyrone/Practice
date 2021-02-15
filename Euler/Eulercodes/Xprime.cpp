#include <iostream>
#include <bits/stdc++.h>


long long int isalsoprime(long long int n)
{
    long long int i;
    if(n==1)return 0;
    for(i=2; i<=n/2;++i){if(n%i==0)return 0;}
    return 1;
}

long long int xprime(long long int x)
{
    long long int result=1;
    for(long long int i=1,j=1;j<=x;++i){
        if(isalsoprime(i)){
            ++j;
            result=i;
        }
    }
    return result;
}
