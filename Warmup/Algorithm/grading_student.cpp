#include <bits/stdc++.h>
#include <string>

using namespace std;

vector<int> studentGrade(vector<int>& grades){
    int n;
    for(int& grade : grades){
       if(grade>=38){
        grade+=((grade%5)>=3)?(5-(grade%5)) : 0;
       }
    }
    return grades;
}

int main(){
    int n;
    vector<int> grades;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        grades.push_back(x);
    }
    studentGrade(grades);
    for(int i=0;i<n;i++){
        cout<<grades[i]<<endl;
    }

}
