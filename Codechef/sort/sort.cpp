#include <iostream>

using namespace std;

void sortarray(int array[],long long int n)
{
    for(int i=0; i<n;++i)
    {
        //finding the smallest number in the subarray
        int index_of_smallest = i;
        for(int j=i; j<n; j++)
        {
            if (array[j]<array[index_of_smallest])
                index_of_smallest = j;
        }

        //swapping
        int temp = array[i];
        array[i] = array[index_of_smallest];
        array[index_of_smallest] = temp;
    }
}

int main()
{
    long long int T;
    cin >> T;
    int a[T];
    for(int i=0; i<T;i++){
        cin>>a[i];
    }
    sortarray(a,T);
    for(int i=0;i<T;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
