#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    float balance, amount;
    cin >> amount >> balance;
    if((int)amount%5==0 && amount-(int)amount<=0 && amount<=balance-0.5){
        balance-= amount + 0.5;
    }
    cout << setprecision(2)<< fixed;
    cout << balance;
    return 0;
}
