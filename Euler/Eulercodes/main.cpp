#include <iostream>
#include "multiples5and3.h"
#include "fibonacci.h"
#include "lastprime.h"
#include "largestpalindrome.h"
#include "smallestmultiple.h"
#include "sumsquaredifference.h"
#include "xprime.h"
#include "largestproduct.h"


using namespace std;

int main()
{
    auto result=0;
    /*result=muliples53();
    cout<<"Multiples of 3 and 5: "<<result<<endl;
    result=fibonacci();
    cout<<"Sum of odd fibonacci: "<<result<<endl;
    result=lastprime(600851475143);
    cout<<"last prime is: "<<result<<endl;
    result=largestpalindrome(3);
    cout<<"largest 3x3 palindrome: "<<result<<endl;
    result=smallestmultiple(20);
    cout<<"smallest multiple until 20: "<<result<<endl;
    result=SUMSQUAREDIFFERENCE(20);
    cout<<"difference of squares is: "<<result<<endl;
    result=xprime(10001);
    cout<<"10001 prime is: "<<result<<endl;*/
    result=largestproduct();
    cout<<"10001 prime is: "<<result<<endl;
    return 0;
}
