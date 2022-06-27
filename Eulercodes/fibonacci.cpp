#include <iostream>
#include <bits/stdc++.h>

using namespace std;

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

int main()
{
    auto result=0;
    result=fibonacci();
    cout<<"Sum of odd fibonacci: "<<result<<endl;
    return 0;
}
