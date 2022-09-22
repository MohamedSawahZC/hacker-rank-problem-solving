#include <bits/stdc++.h>

using namespace std;

    void staircase(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<n-i-1){
                cout<<" ";
            }else{
            cout<<"#";
            }
        }
                    cout<<endl;
    }


    }

int main()
{
    int n;
    cin>>n;
    staircase(n);

}
