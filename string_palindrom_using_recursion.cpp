#include<iostream>
using namespace std;
bool fun( string s,int i=0){
    //tolowercase
    for(char &c:s){
        if(c>='A' && c<='Z'){
          c=c+('a'-'A');
        } 
      }
   //remove alphanumeric
string s2="";
for(char c:s){
  if((c>='a'&& c<='z') || (c>='A'&& c<='Z') || (c>='0'&& c<='9')){
    s2=s2+c;
  }
}

//chk palindromw or note
  if(i>=s2.size()/2){
    return true;
  }
        if(s2[i]!=s2[s2.size()-i-1]){
            return false;
        }
    return fun(s2,i+1);
   
}
int main(){
    string s;
    cin>>s;
if(fun(s)){
    cout<<"true";
}
else{
    cout<<"false";
}
}