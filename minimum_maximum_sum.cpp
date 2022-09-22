#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector< unsigned  long  long> arr;
    unsigned  long  long Min=0,Max=0;
    for(int i=0;i<5;i++){
            int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());

    Min=arr[0]+arr[1]+arr[2]+arr[3];
    Max=arr[1]+arr[2]+arr[3]+arr[4];
    cout<<Min<<" "<<Max;

}
