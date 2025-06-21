// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr)
{
    int n=arr.size();
    for(int i=0;i<=n-2;++i)
    {
        int mini=i;
        for(int j=i;j<=n-1;++j)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);

    }
}

int main(){

    vector<int>arr={13,46,24,52,20,9};
    selectionSort(arr);

    for(auto i:arr){
        cout<<i<<"  ";
    }

}