#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //create s hash arr
     //inside main we can take max size 10 ki power 6 and in globally 10 ki 7
    int hashh[100000]={0};  
   for(int i=0;i<n;i++){
    hashh[arr[i]]++;
   }

   //taking input
   int t;
   cin>>t;
   cout<<hashh[t];

}
