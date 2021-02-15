#include <iostream>
#include <bits/stdc++.h>


int fibonacci(void)
{
    int result=2,primero=1,segundo=2,temp;
    while(segundo<=4000000){
        temp=segundo+primero;
        primero=segundo;
        segundo=temp;
        if(segundo%2==0)result+=segundo;
    }
    return result;
}
