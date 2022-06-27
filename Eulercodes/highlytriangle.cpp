#include <iostream>
#include <bits/stdc++.h>
#include "isprime.h"
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

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
        //cout<<"current triangle: "<<i<<endl;
    }
}
