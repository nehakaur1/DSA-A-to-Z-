#include<bits/stdc++.h>
using namespace std;
int  Min(int a[],int n){

    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(a[i],mini);

    }
  return mini; 
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
    cout<<Min(a,n);
    return 0;
}