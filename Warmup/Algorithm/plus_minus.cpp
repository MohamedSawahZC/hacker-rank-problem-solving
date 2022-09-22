#include <bits/stdc++.h>

using namespace std;



int main()
{
    double p=0,n=0,z=0;
    int size;
    cin>>size;
    for(int i=0 ; i<size;i++){
        int x;
        cin>>x;
        if(x>0){
            p++;
        }else if(x<0){
        n++;
        }else{
        z++;
        }
    }
    p=(p/size);
    n=(n/size);
    z=(z/size);
    cout<<setprecision(6)<<p<<endl<<n<<endl<<z;

}
