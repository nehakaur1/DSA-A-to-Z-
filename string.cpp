#include<iostream>
#include<String>
#include<cctype>   //for tolower()
using namespace std;
int main(){
  string s="Neha";
  //cout<<s[2]<<endl;
//     int l=s.length();
//   cout<<l<<endl;
//   cout<<s[l-2]<<endl;
// //   if
// s[2]='p';
// cout<<s;

//covert to lower case
// for(char &c:s){
//   c=tolower(c);
// }
//without tolower fuction
for(char &c:s){
  if(c>='A' && c<='Z'){
    c=c+('a'-'A');
  } 
}
cout<<s;
// remove alphanumeri from string
string a="N!h a";
string b="";
for(char c:a){
  if((c>='a'&& c<='z') || (c>='A'&& c<='Z') || (c>='0'&& c<='9')){
    b=b+c;
  }
}
cout<<b;
}