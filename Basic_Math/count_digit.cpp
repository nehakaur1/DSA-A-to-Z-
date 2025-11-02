#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cout << "enter n";
    cin >> n;
int c=0;

 while(n>0){
c++;
n=n/10;
 }
 cout<<c;
    return 0;
}
