#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long int SUMSQUAREDIFFERENCE(int n)
{
    long int difference=0,sum=0,square=0;
    for(int i=1;i<=n;++i){
        square+=i*i;
        sum+=i;
    }
    difference=(sum*sum)-square;
    return difference;
}

int main()
{
    auto result=0;
    result=SUMSQUAREDIFFERENCE(20);
    cout<<"difference of squares is: "<<result<<endl;
    return 0;
}
