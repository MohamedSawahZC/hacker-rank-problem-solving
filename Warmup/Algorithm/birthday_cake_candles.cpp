#include <bits/stdc++.h>

using namespace std;

    int birthdayCakeCandles(vector<int> arr){
    sort(arr.begin(),arr.end());
    int count=0;
    int index=arr.size()-1;
    int MAX=arr[index];
    while(MAX==arr[index]){
        count++;
        index--;
    }
    return count;

    }

int main()
{
   vector<int> x;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int z;
    cin>>z;
    x.push_back(z);
   }

   cout<<birthdayCakeCandles(x);




}
