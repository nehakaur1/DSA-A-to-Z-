#include <bits/stdc++.h>
using namespace std;
int second_largest(int a[], int n)
{
    int first = INT_MIN;

    // this is brute force still time complexity is same as in optimal solution but this is too long

    // for (int i = 0; i < n; i++)
    // {
    //     first= max(a[i], first);
    // }
    // int second=INT_MIN;
    //  for (int i = 0; i < n; i++)
    // {
    //     if (a[i]>second && a[i]<first){
    //         second=a[i];
    //     }
    // }
    // return second;


    //this is optimal
int second =INT_MIN;
     for (int i = 0; i < n; i++)
    {
        if(a[i]>first){
      second=first;
      first=a[i];
        }
        // we r taking && for if there is max value duplicate
  else if(a[i]>second && a[i]!=first ){
    second=a[i];
  }
        
    }
    return second;
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
    cout << second_largest(a, n);
    return 0;
}