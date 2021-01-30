#include <iostream>

using namespace std;

int main()
{
    float balance, amount;
    cin >> amount >> balance;
    if((int)amount%5==0 && amount-(int)amount<0 && amount<balance){
    balance-= amount + 0.5;}
    cout << balance;
    return 0;
}
