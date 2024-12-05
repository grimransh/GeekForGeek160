
#include <iostream>
#include <vector>

using namespace std;

void rotateArr(vector<int> &arr, int d){

    int n = arr.size();
    d %= n;
    int temp[d];

    for (int i = 0; i < d; i++)    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++)    {
        arr[i] = temp[i - (n - d)];
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int d = 2;

    rotateArr(arr, d);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}