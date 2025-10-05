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
    
   int rev=n-1;
     for (int i = 0;i < n/2; i++)
        { 
           swap(a[i],a[rev]);
           rev--;
            }
            
        for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

}
     
