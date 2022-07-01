#include <bits/stdc++.h>
#include "bigint.hpp"


using namespace std;

int main(void)
{
    BigInt result("0");
    BigInt a;
    string getter;
    for(int i=0;i<100;i++){
        cin>>getter;
        a=getter;
        result+=a;
    }
    cout << "sum is: " << result <<endl;
    return 0;
}
