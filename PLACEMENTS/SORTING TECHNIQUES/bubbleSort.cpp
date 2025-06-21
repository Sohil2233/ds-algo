// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>&arr)
{
    int n=arr.size();
   for(int i=n-1;i>=1;--i)
   {

    int didSwap=0;

    for(int j=0;j<=i-1;++j)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
            didSwap=1;
        }
    }
    if(didSwap==0)
    {
        break;
    }
   }
}

int main(){

    vector<int>arr={13,46,24,52,20,9};
    BubbleSort(arr);

    for(auto i:arr){
        cout<<i<<"  ";
    }

}