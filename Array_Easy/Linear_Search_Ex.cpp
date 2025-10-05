// Given an array, and an element num the task is to find 
// if num is present in the given array or not.
// If present print the index of the element or print - 1.

#include <bits/stdc++.h>
                                                                                                                                                    using namespace std;
int chk(int a[], int n,int k)
{
 
    for (int i = 0; i < n; i++)
    {
  if(a[i]==k){
    return i;
  }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int k;
      cout << "enter k";
    cin>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << chk(a, n,k);
    return 0;
}