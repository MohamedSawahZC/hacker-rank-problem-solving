#include <bits/stdc++.h>
#include <string>

using namespace std;


string timeConversion(string s) {
    if(s[0]=='1' && s[1]=='2' && s[8]=='A'){
        s[0]='0';
        s[1]='0';
    }
    if(!(s[0]=='1' && s[1]=='2') && s[8]=='P'){
        string q;
        q=s.substr(0,2);
        int num=stoi(q);
        num+=12;
        s[0]=(num/10)+'0';
        s[1]=(num%10)+'0';
    }
    string a;
    for(int i=0;i<8;i++){
        a+=s[i];
    }

    return a;
}

int main(){
    string s;

    cin>>s;
    cout<<timeConversion(s)<<endl;

    return 0;
}
