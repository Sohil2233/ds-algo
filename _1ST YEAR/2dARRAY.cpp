#include <iostream>
#include <bits/stdc++.h>
#include<limits.h>
using namespace std;

//int main() {
 
//   //declaration of 2d array
//   int arr[3][3];


//   //initilization
//   int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//   //access
//   cout<<brr[2][2]<<endl;
//   cout<<brr[0][1]<<endl;
// //row wise print
//   for(int i=0;i<3;i++)
//   {
//     for(int k=0;k<3;k++)
//     {
//       cout<<brr[i][k]<<" ";
//     }
//     cout<<endl;
//   }
//   cout<<endl<<endl;

//   //col wise print
//   for(int i=0;i<3;i++)
//   {
//     for(int k=0;k<3;k++)
//     {
//       cout<<brr[k][i]<<" ";
//     }
//     cout<<endl;
//   }


//row wise sum
  // int arr[4][4]={{1,2,3,4},{2,3,4,1},{2,3,6,5},{1,9,9,6}};
  // for(int i=0;i<4;i++)
  // {
  //   int sum=0;
  //   for(int k=0;k<4;k++)
  //   {
  //     cout<<arr[i][k]<<" ";
  //   }
  //   cout<<endl;
  // }
  // for(int i=0;i<4;i++)
  // {
  //   int sum=0;
  //   for(int k=0;k<4;k++)
  //   {
  //     sum=sum+arr[i][k];
  //   }
  //   cout<<sum<<endl;
  // }
//   return 0;
// }





//max and min function
  // int maxfun(int arr[][3],int m , int n)
  // {
  //   int maxi=INT_MIN;   
  //   for(int i=0;i<m;i++)
  //   {
  //     for(int k=0;k<n;k++)
  //     {
  //       if(arr[i][k]>maxi)
  //       maxi=arr[i][k];
  //     }
  //   }
  //   return maxi;

  // }
  // int minfun(int arr[][3],int m , int n)
  // {
  //   int mini=INT_MAX;
  //   for(int i=0;i<m;i++)
  //   {
  //     for(int k=0;k<n;k++)
  //     {
  //       if(arr[i][k]<mini)
  //       mini=arr[i][k];
  //     }
  //   }
  //   return mini;
  // }

  // int main()
  // {
  //   int arr[3][3]={{5,6,9},{7,1,2},{4,3,12}};
  //   int n=3;
  //   int m=3;
  //   int max=maxfun(arr,m,n);
  //   int min=minfun(arr,m,n);
  //   cout<<" max is "<<max<<endl;
  //   cout<<" min is "<<min<<endl;
  // }



//transpose of 2d array
// int transpose(int arr[][3],int m , int n)
// {
//   for(int i=0;i<m;i++)
//     {
//       for(int k=0;k<n;k++)
//       {
//         cout<<arr[i][k]<<"  ";
//       }
//       cout<<endl;
//     }
// }


//   int main()
//   {
//     int arr[3][3]={{5,6,9},{7,1,2},{4,3,12}};
//     int n=3;
//     int m=3;
//     transpose(arr,m,n);
    
//   }







//sort 0's 1's2's

// void sortArray(vector<int>& arr, int n) {

//     int low = 0, mid = 0, high = n - 1; // 3 pointers

//     while (mid <= high) {
//         if (arr[mid] == 0) {
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid] == 1) {
//             mid++;
//         }
//         else {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

// int main()
// {
//     int n = 6;
//     vector<int> arr = {0, 2, 1, 2, 0, 1};
//     sortArray(arr, n);
//     cout << "After sorting:" << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }











//pos neg pos neg
//when no +ve and -ve are equal
// vector<int> RearrangebySign(vector<int>A){
    
//   int n = A.size();
//    vector<int> ans(n,0);
  
//   int posIndex = 0, negIndex = 1;
//   for(int i = 0;i<n;i++){
      
//        if(A[i]<0){
//           ans[negIndex] = A[i];
//           negIndex+=2;
//       }
      
//      else{
//           ans[posIndex] = A[i];
//           posIndex+=2;
//       }
//   }
  
//   return ans;
    
// }

// int main() {
 
  
//   vector<int> A = {1,2,-4,-5};

//   vector<int> ans = RearrangebySign(A);
  
//   for (int i = 0; i < ans.size(); i++) {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }










//-ves aaaand +ves not equal
//   vector<int> RearrangebySign(vector<int>A, int n){
    
//   vector<int> pos;
//   vector<int> neg;
  
//   for(int i=0;i<n;i++){
      
//       if(A[i]>0) pos.push_back(A[i]);
//       else neg.push_back(A[i]);
//   }
  
//   if(pos.size() < neg.size()){
      
//     for(int i=0;i<pos.size();i++){
      
//       A[2*i] = pos[i];
//       A[2*i+1] = neg[i];
//     }
    
    
//     int index = pos.size()*2;
//     for(int i = pos.size();i<neg.size();i++){
        
//         A[index] = neg[i];
//         index++;
//     }
//   }
  
  
//   else{
      
//       for(int i=0;i<neg.size();i++){
      
//       A[2*i] = pos[i];
//       A[2*i+1] = neg[i];
//   }
    
    
    int index = neg.size()*2;
//     for(int i = neg.size();i<pos.size();i++){
        
//         A[index] = pos[i];
//         index++;
//     }
//   }
//   return A;
    
// }










