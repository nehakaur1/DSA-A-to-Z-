#include <bits/stdc++.h>
using namespace std;
// brute force

// int missing(int a[], int n)
// {

//     for (int i = 0; i <= n; i++)
//     {
//         bool found = false;
//         for (int j = 0; j < n; j++)
//         {
//             if (i == a[j])
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cout << "enter n";
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << missing(a, n);
//     return 0;
// }


//optimal 
//using hashing technique

int missing(int a[], int n)
{
 int hash[n+1]={0};  //////[0,0,0,0,0,0]
    for (int i = 0; i <n-1; i++)
    {
      hash[a[i]]++;
       
    }
    for (int i = 0; i <=n; i++)
    {
      
       if(hash[i]==0){
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

    int a[n-1];  // one number is missing
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }
    cout << missing(a, n);
    return 0;
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
    cout << missing(a, n);
    return 0;
}
