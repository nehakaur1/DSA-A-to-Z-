#include<iostream>
using namespace std;

void go(string s){
    s[0]='p';
    cout<<s<<endl;
}
void chnge(string &city){
    city[0]='p';
    cout<<city<<endl;
}
int main(){
    string name ="Neha";
    // call by value
    // in this change be done in the copy value not in the original value
    go(name);
    cout<<name<<endl;
    // call by refernce
    // in this change be done in the original value
    string city="delhi";
     chnge(city);
    cout<<city;
}
