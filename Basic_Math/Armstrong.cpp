#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int power=0;
    int temp=n;
     int temp2=n;
       while(n>0){
        n=n/10;
        power++;
    }
    int sum=0;
    while(temp>0){
        int a=temp%10;
        //using pow
        sum+=pow(a,power);
        temp=temp/10;
    }
    if(sum==temp2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}
