#include <bits/stdc++.h>
#include "bigint.hpp"
#define LL long long int


using namespace std;

int main(void)
{
    BigInt dosexp("2");
    BigInt exp("1000");
    BigInt cero("0");
    BigInt diez("10");
    BigInt result("0");
    dosexp = dosexp^exp;
    while(dosexp!=cero)
    {
        result = result + (dosexp % diez);
        dosexp = dosexp/diez;
    }
    cout<<result;
    return 0;
}
