#include <bits/stdc++.h>
using namespace std;

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
      int d=a[0]; // empty the a[0]
     for (int i = 0;i < n-1; i++)
        { 
            int j=i+1;
            a[i]=a[j];
           
    }
     a[n-1]=d;   //put a[0] starting value in place of last element




    //for right rotate
    //    int d=a[n-1]; 
    //  for (int i = n-1;i >0; i--)
    //     { 
    //         int j=i-1;
    //         a[i]=a[j];
           
    // }
    //  a[0]=d;   
        for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

}
     
