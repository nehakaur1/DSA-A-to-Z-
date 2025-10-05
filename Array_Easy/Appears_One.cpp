#include <bits/stdc++.h>
using namespace std;


int one(int a[], int n)
{

    
    
    // brute force
    
    
//	 bool c=true;
//        bool already =false;
//
//    //chk element alredy chked or not
//
//    for (int k = 0; k <i; k++)
//    {
//      if(a[i]==a[k]){
//      	already=true;
//      	break;
//	  }}
//      if(already){
//        continue;
//      }
//      
//    for (int j = 0; j <n; j++)
//    {
//      if(a[i]==a[j] && i!=j){
//      	c=false;
//      	break;
//	  }
//      
//    }
//	if(c){
//		return a[i];
//	}


//optimal

//we ll use xor operator here bcz when we xor two same value it become 0 so only the once value will be remain 

int res=0;
for (int i = 0; i <n; i++)
  
    { res^=a[i];

}
return res;
    
    
}
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
    cout << one(a, n);
    return 0;
}
