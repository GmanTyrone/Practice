#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int muliples53(void)
{
    int result=0;
    for(int i=1;i<1000;i++){
        if(i%3==0||i%5==0)result+=i;
    }
    return result;
}

int main()
{
    auto result=0;
    result=muliples53();
    cout<<"Multiples of 3 and 5: "<<result<<endl;
    return 0;
}
