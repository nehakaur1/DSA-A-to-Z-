#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter n";
    cin >> n;

     int k;
    cout << "enter k";
    cin >> k;
    k=k%n;  //for large value of k
    int a[n];



for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //brute force


//     while (k!=0){
//       int d=a[0]; // empty the a[0]
//      for (int i = 0;i < n-1; i++)
//         { 
//             int j=i+1;
//             a[i]=a[j];
           
//     }
//      a[n-1]=d;   //put a[0] starting value in place of last element
//      k--;
//     }


//optiaml

// Reverse the first k elements.
int j=k-1;
for(int i=0;i<k/2;i++){
    swap(a[i],a[j]);
    j--;
}

// Reverse the remaining n-k elements.
int l=n-1;
for(int i=k;i<(k+n)/2;i++){
    swap(a[i],a[l]);
    l--;
}
// Reverse the entire array.
int m=n-1;
for(int i=0;i<n/2;i++){
    swap(a[i],a[m]);
    m--;
}
        for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

}
    

//same for right rotate in which
// reverse last k
// reverse first n-k
// the whole
