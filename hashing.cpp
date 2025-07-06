#include<iostream>
using namespace std;
#include <map>
int main(){
// this is number hasing and we use array
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    //    int hash[10000000]={0};   it work bcz 10 ki power 7 h  it will not work if we declare it locally(inside any other func not globally
//    int hash[n+1]={0};
//    for(int i=0;i<n;i++){
//        hash[arr[i]]++;
//    }
//    int a;
//    cin>>a;
//    while(a--){
//    int c;
//    cin>>c;
// 	cout<<hash[c];
// 		}
	
//in below code we only can give arr size only till 10 ki power 8 not greter than that thatis why we use map,(hashmap)
// int n;
//    cin>>n;
//   int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
 
//    map<int,int>maap;
//    for(int i=0;i<n;i++){
//        maap[arr[i]]++;
//    }
//    int a;
//    cin>>a;
//    while(a--){
//    int c;
//    cin>>c;
// 	cout<<maap[c];
// 		}
	 
        
// now character hasing in this we also use array
//     string s;
//    cin>>s;
//    int n=s.size();
//    int hashh[n]={0};        // if we do 256 instead of n it will work for all char bcx hashh will take charcacter's ascii 
//    for(int i=0;i<n;i++){	
//        hashh[s[i]-'a++;    //for uppercase DO 'A' instead of 'a'
//    }
//    int a;
//    cin>>a;
//    while(a--){
//    char c;
//    cin>>c;	
//    cout<<hashh[c-'a']; 
//	}


// there is no problem in chaaract hasing case
// but for practice u can do this with map too
     string s;
    cin>>s;
    int n=s.size();
    map<char,int>maap;       
    for(int i=0;i<n;i++){	
        maap[s[i]]++;    
    }
    int a;
    cin>>a;
    while(a--){
    char c;
    cin>>c;	
    cout<<maap[c]; 
 	}


}
