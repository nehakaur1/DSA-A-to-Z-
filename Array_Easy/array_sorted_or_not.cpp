#include <bits/stdc++.h>
using namespace std;
bool chk(int a[],int n){
    bool b=true;
    bool c=true;
     for (int i = 0;i < n-1; i++){
//for ascending 
            if(a[i]>a[i+1]){
                b=false;
            }
// for descending order
             if(a[i]<a[i+1]){
                c=false;
            }
            if(!b && !c){ // this is for what if we found in starting taht array is unsorted
                return false;
            }

}
return true;}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
// this is when we chk only in ascending order 


//    bool v=true;
//      for (int i = 0;i < n-1; i++){

//             if(a[i]>a[i+1]){
//                 v=false;
//                 break;
//             }
        
//      }
//      cout<<v;
      
  


// chk in both ascending and decending order together
if(chk(a,n)){
    cout<<"true";
}
else{
    cout<<"false";
}
}
     
