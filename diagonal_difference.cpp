#include <bits/stdc++.h>

using namespace std;

int diagonalDifferrence(vector<vector<int> > arr){
    int row,col,size,diag1,diag2;
    row=col=diag1=diag2=0;
    size = arr.size();
    col=size-1;
    while(row<size){
        diag1 += arr[row][row];
        diag2 +=arr[row][col];
        ++row;
        col--;
    }
    return abs(diag1 - diag2);
}

int main()
{
    vector<vector<int> > arr;
    int size;
    cin>>size;
    for(int i=0; i<size;i++){
            vector<int> data;
        for(int j=0;j<size;j++){
            int value;
        cin>>value;
            data.push_back(value);
        }
    arr.push_back(data);
    }
    cout<<diagonalDifferrence(arr)<<endl;

}
