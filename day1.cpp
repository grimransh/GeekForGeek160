/* Given an array of positive integers arr[], return the second largest element from the array.If the second largest element doesn't exist then return -1.
Note : The second largest element should not be equal to the largest element. */

#include <iostream>
#include <vector>
using namespace std;

int getSecondLargest(vector<int> &arr){

    int largest = -1, secondLargest = -1;

    for (int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i] > secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}
int main()
{
    int a[] = {12, 35, 1, 10, 35, 1};
    vector<int> vec(a, a + sizeof(a) / sizeof(a[0])); ///////////////
    int b = getSecondLargest(vec);  
    cout << "The second largest value is: " << b << endl;

    return 0;
}
