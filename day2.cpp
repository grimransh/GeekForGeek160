/* Given an array arr[]. Push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements. 
Do the mentioned change in the array in place.*/

#include<iostream>
#include<vector>
using namespace std;
void pushZerosToEnd(vector<int>& arr){
    int j=0;
    vector<int> temp(arr.size());
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            temp[j++]=arr[i];
        }
    }
    for(;j<arr.size();j++){
        temp[j]=0;
    }
    for(int i=0;i<arr.size();i++){
        arr[i]=temp[i];
    }
}
int main(){
    vector<int> arr = {1, 2, 0, 14, 3, 5};
    pushZerosToEnd(arr);
    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
}
