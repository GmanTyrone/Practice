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

int1024_t highlytriangle(int x)
{
    for(int1024_t i=1,j=1;1;++j,i+=j){
        for(int1024_t k=1,counter=0;k<=sqrt(i);++k){
            if(i%k==0){
                    if(i/k==k)++counter;
                    else counter+=2;
            }
            if(counter>x)return i;
        }
    }
}

int main()
{
    cout<<"triangle number divisible by 500 factors is: "<<highlytriangle(500)<<endl;
    return 0;
}
