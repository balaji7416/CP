#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> leftPart(arr.begin()+low, arr.begin()+mid+1);
    vector<int> rightPart(arr.begin()+mid+1, arr.begin()+high+1);

    int i = 0, j = 0, k = low;
    while(i < leftPart.size() and j < rightPart.size()){
        if(leftPart[i] <= )
        
}

void merge_sort(vector<int> &arr, int low, int high)
{
    if (low > high)
        return;

    int mid = low + high >> 1;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {4, 3, 2, 1, 5};
    merge_sort(arr, 0, arr.size() - 1);

    for (auto i : arr)
    {
        cout << i << " ";
    }
}