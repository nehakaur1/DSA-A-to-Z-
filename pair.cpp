// #include<bits/stdc++.h>      we use this for including all the library in cpp
#include<iostream>
#include<utility>   //for using pair datatype 
using namespace std;
int main(){

  pair <int,int>p={1,2};
  cout<<p.first;
 cout<<p.second;

//  for multiple values
pair<int,pair <int,int>>a={3,{1,2}};
cout<<a.second.second;


// pair array
pair <int,int>b[]={{1,2},{3,4},{5,6},{6,7}};   // indexing 0,1,2,3
  cout<<b[3].first;
}