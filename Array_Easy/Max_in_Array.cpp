#include<bits/stdc++.h>
using namespace std;
int  Max(int a[],int n){
//     int max=a[0];
//     for(int i=1;i<n;i++){
//  if(a[i]>max){
//         max=a[i];
//     }

//     }

//or
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(a[i],maxi);

    }
  return maxi; 
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
    cout<<Max(a,n);
    return 0;
}