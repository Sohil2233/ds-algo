// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

void Insertion(vector<int>&arr)
{
    int n=arr.size();
   for(int i=0;i<=n-1;++i)
   {
    int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
        
   }
}

int main(){

    vector<int>arr={13,46,24,52,20,9};
    Insertion(arr);

    for(auto i:arr){
        cout<<i<<"  ";
    }

}