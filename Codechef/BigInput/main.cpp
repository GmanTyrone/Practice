#include <iostream>

using namespace std;

int main()
{
    int n,k,test,divisible=0;
    cin >> n >> k;
    for(int i=0; i<n;i++){
        cin>>test;
        if(test%k==0)divisible++;
    }
    cout << divisible;
    return 0;
}
