#include <iostream>

using namespace std;

int main()
{
    int T,a,b;
    cin>>T;
    int nums[T];
    for(int i=0;i<T;i++){
        cin>>a>>b;
        nums[i]=a+b;
    }
    for(int i=0;i<T;i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}
