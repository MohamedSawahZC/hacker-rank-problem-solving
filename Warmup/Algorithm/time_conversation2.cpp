#include <bits/stdc++.h>

using namespace std;


string timeConversion(string s) {
    if(s[0]=='1' && s[1]=='2' && s[8]=='A'){
        s[0]='0';
        s[1]='0';
    }
    if(!(s[0]=='1' && s[1]=='2') && s[8]=='P'){
        int num=((s[0]-'0'))*10+(s[1]-'0');
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
    cout<<timeConversion(s);

    return 0;
}
