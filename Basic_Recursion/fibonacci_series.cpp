#include <bits/stdc++.h>
using namespace std;
void fiv(int n,int s=0,int e=1,int i=2){
if(n==0 || n==1){
    cout<<n;
    return;
}

if(i==2){
    cout<<s<<" "<<e<<" ";
}

if(i>n){
    return;
}
int c=s+e;
cout<<c<<" ";
fiv(n,e,c,i+1);


}



int main()
{
    int n;
    cout << "enter n";
    cin >> n;
//     int s=0;
//     int e=1;
//     cout<<s<<" "<<e<<" ";
// for(int i=2;i<=n ;i++){

// int ans=s+e;


// s=e;
// e=ans;
// cout<<ans<<" ";
// }
//     return 0;



//using recursion
fiv(n);
return 0;
}
