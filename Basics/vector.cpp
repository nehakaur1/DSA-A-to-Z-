#include<bits/stdc++.h>
using namespace std;
int main(){
    // you can resize a vector
  // vector is like dynamic array in which we can change esily

    vector<int>a;      //this will create a empty container
     a.push_back(1);
     //{1}
     //or
     a.emplace_back(2);   //this is also same as push_back
     //{1,2}


     //vector pair
     vector<pair<int,int>>b;
     b.push_back({1,2});
    //  or
    b.emplace_back(1,2);

    // vector array
     vector<int>arr(5,50);   //{50,50,50,50,50}
    //vector<int>arr(5);   //{0,0,0,0,0}


    vector<int>v1(4,10);
    vector<int>v2(v1); // it would be same as v1

    /***************************************** Access element in vector********************************/
    vector<int>a1(3,10);
    cout<<a1[1]<<endl;
    cout<<a1.back()<<endl;// take u to the last element

            //other way of accessing

    // iterators----> iterators are nothing else but points to the memory location of elements
    vector<int>::iterator it=a1.begin(); // actually this take u to the starting memory location
    it++;
    cout<<*(it)<<endl;  // actually * give u the value if we dont use this we'll get address
  vector<int>::iterator it2=a1.end(); // actually this take u to the one extra endpoint memory location
// not that used      vector<int>::iterator it=a1.rend(); // actually this take u to the one extra endpoint memory location reversely
// not that used      vector<int>::iterator it=a1.rbegin();// actually this take u to the starting memory location reversly(tae u at last)


/******************************************print vector iterationwise************************/
// we can also print with simple loop

  //  or
  //  for( vector<int>::iterator iter=arr.begin();iter!=arr.end();iter++){
  //   cout<<*iter<<endl;
  //  }

  //  or
  // with the help of auto it autimatically recognize the datatype
  //  for( auto iter=arr.begin();iter!=arr.end();iter++){
  //   cout<<*iter<<endl;
  //  }

  // or
  //  with the help of for each loop
  //  for( auto iter:arr){
  //   cout<<iter<<endl;
  //  }
   //or
  //  with the help of simple for loop
   for( int i=0;i<5;i++){
    cout<<a[i]<<endl;  //{1,2,random,random,random}
   }

// delete function in vector
a1.erase(a1.begin()+1);    //it will delet the element just after the starting element
// if we wamt to delete two element
//  for ex {1,2,3,4}  and want to remove 2,3 then for removing the 3 we have to go for one extra iteration that is jsut after the elemnt we want to delete
a1.erase(a1.begin()+1,a1.begin()+3);  

// insert
vector<int>vec(3,20);       {//20,20,20}
vec.insert(vec.begin(),30);   //it would be {30,20,20,20}
vec.insert(vec.begin()+1,2,40);     //it would be {30,40,40,20,20,20}
}