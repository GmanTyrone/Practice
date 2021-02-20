#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int T,score=0,A=0,B=0,a,b;
    cin >> T;
    for(int i=0;i<T;i++){
        cin>>a>>b;
        A+=a;
        B+=b;
        if(abs(A-B)>abs(score))score=A-B;
    }
    if(score<0)cout<<"2 ";
    else cout<<"1 ";
    cout<<abs(score);
    return 0;
}
