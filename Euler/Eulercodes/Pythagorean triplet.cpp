#include <iostream>
#include <bits/stdc++.h>
#include <math.h>


int pythagorean(int x)
{
    int result;
    for(int i=1;i<=x-2;i++){
        for(int j=1;j<=x-1-i;j++){
            if(i*i+j*j==(x-i-j)*(x-i-j))result=i*j*(x-i-j);
        }
    }
    return result;
}
