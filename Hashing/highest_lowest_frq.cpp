#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int hashh[100000]={0};  
   for(int i=0;i<n;i++){
    hashh[arr[i]]++;
   }
   //find mximum
 int max=INT_MIN;
 int t=arr[0];
 for(int i=0;i<n;i++){
    if(hashh[arr[i]]>max){
        max=hashh[arr[i]];
           t=arr[i];
    };
   }
   cout<<t;


      //find mnimum
 int min=INT_MAX;
 int s=arr[0];
 for(int i=0;i<n;i++){
    if(hashh[arr[i]]<min){
        min=hashh[arr[i]];
           s=arr[i];
    };
   }
   cout<<s;


}
