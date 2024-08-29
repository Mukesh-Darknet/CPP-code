// #include <iostream>
// #include<limits>
// using namespace std;
// int main(){
//   cout<<INT_MIN<<endl;
//   cout<<INT_MAX<<endl;
// }



// find the minimum number fron an array;

#include <iostream>
#include <limits.h>
using namespace std;



// function for finding minimum value
int minValue(int arr[],int size){
  int minAns = INT_MAX;
  for(int i=0;i<size;i++){
    if(arr[i]<minAns){
      minAns = arr[i];

    }
  }
  return minAns;

}

// function for finding maximum value
int maxValue(int arr[] ,int size){
  int maxAns = INT_MIN;
  for(int i=0;i<size;i++){
    if(arr[i]>maxAns){
      maxAns =arr[i];
    }
  }
  return maxAns;

}




int main(){
  int arr[] = {12,11,13,0,44,200};
  int minNo = minValue(arr,6);
  int maxNo = maxValue(arr,6);
  cout<<"minimum value from array:"<<minNo<<endl;
  cout<<"Maximum value from an array:"<<maxNo;

}



// #include<iostream>
// using namespace std;
// int main(){
//   int arr[] ={11,3,20,14,6,10};
//   int max = arr[0];
//   for(int i=0;i<6;i++){
//     if(arr[i]<max){
//       max = arr[i];
//     }
//   }
//   cout<<max;

// }