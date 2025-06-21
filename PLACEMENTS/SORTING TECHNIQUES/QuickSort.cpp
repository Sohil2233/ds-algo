// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
int Qfuc(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];  // store the pivot value, not index
    int i = low;
    int j = high;

    while(i < j)
    {
        while(arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while(arr[j] > pivot && j >= low + 1)
        {
            j--;
        }

        if(i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);  // place pivot in its correct position
    return j;  // pivot index
}

void QuickSort(vector<int>& arr, int low, int high)
{
    if(low < high)
    {
        int partition = Qfuc(arr, low, high);
        QuickSort(arr, low, partition - 1);
        QuickSort(arr, partition + 1, high);
    }
}



int main(){

    vector<int>arr={13,46,24,52,20,9};
    int n = arr.size();
    int low = 0;
    int high = n-1;

    QuickSort(arr, low, high);

    for(auto i:arr){
        cout<<i<<"  ";
    }

}