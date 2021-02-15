#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long int smallestmultiple(int n)
{
    long int answer=0,test=1;
    short int flag=0;
    while(flag==0){
        for(int i=1;i<=n;++i){
            if(test%i!=0)break;
            if(i==n){
                    answer=test;
                    flag=1;
            }
        }
        ++test;
    }
    return answer;
}
