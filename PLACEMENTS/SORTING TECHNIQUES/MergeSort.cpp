// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;


void Merge (vector<int>&arr, int low , int mid, int high){
    int left=low;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }

    }
    while (left<=mid)   
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)   
    {
        temp.push_back(arr[right]);
        right++;
    }

    int tempIndex = 0;
    for (int i = low; i <= high; ++i) {
        arr[i] = temp[tempIndex];
        tempIndex++;
    }

}
void MergeSort(vector<int>&arr, int low , int high)
{
   if(low>=high) return;

   int mid=(low+high)/2;
   MergeSort(arr,low,mid);
   MergeSort(arr,mid+1,high);
   Merge(arr,low,mid,high); 
}



int main(){

    vector<int>arr={13,46,24,52,20,9};
    int n = arr.size();
    int low = 0;
    int high = n-1;

    MergeSort(arr, low, high);

    for(auto i:arr){
        cout<<i<<"  ";
    }

}