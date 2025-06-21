#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits.h>
using namespace std;
// selection sort
//  void selection(int arr[],int n)
//  {
//      for(int i=0;i<n-1;i++)
//      {
//          int min=i;
//          for(int k=i;k<n;k++)
//          {
//              if(arr[k]<arr[min])
//              min=k;
//          }
//          swap(arr[min],arr[i]);
//      }
//
//  }
// time complexity o{n^2}

// int main()
// {
//     int arr[]={13,46,24,52,20,9};
//     int n=6;
//     selection(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// void bubble(int arr[],int n)
// {
//     for(int i=n-1;i>=1;i--)
//     {
//         for(int j=0;j<=i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             swap(arr[j],arr[j+1]);

//         }
//     }
// }

// int main()
// {
//     int arr[]={13,46,24,52,20,9};
//     int n=6;
//     bubble(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// insertion sort
//  void insertsort(int a[],int n)
//  {
//      for(int i=0;i<n;i++)
//      {
//          int value=a[i];
//          int j=i;
//          while(j>0 && a[j-1]>value)
//          {
//              a[j]=a[j-1];
//              j--;
//          }
//          a[j]=value;
//      }

// }
// int main()
// {
//     int arr[]={13,46,24,52,20,9};
//     int n=6;
//     insertsort(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// int indexTARGET(int arr[],int n,int t)
// {
//     int st=0,end=n-1;
//     int mid=(st+end)/2;
//     while (st<=end)
//     {
//         if(arr[mid]==t)
//         return mid;
//         else if(arr[mid]>t)
//         end=mid-1;
//         else
//         st=mid+1;

//         mid=(st+end)/2;
//     }

//     return -1;

// }
// int main()
// {
//     int arr[]={2,4,6,8,18,14,12,56};
//     int size=8;
//     int target=20;
//     cout<<indexTARGET(arr,size,target);

// }

// int main()
// {
//     //int arr[]={2,4,6,8,18,14,12,56};
//     // int size=8;
//     // int target=20;
//     //binary_search(arr,arr+n,30);
//     vector<int>arr{2,4,6,8,18,14,12,56};
//     if(binary_search(arr.begin(),arr.end(), 12))
//     {cout<<"found";
//     }
//     else
//     {cout<<"not found";
//     }
//    // cout<<indexTARGET(arr,size,target);
// }

// int firstocc(int arr[],int n,int t)
// {
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e)
//     {
//         if(arr[mid]==t)
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else if(arr[mid]<t)
//         s=mid+1;
//         else
//         e=mid-1;
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int main()
// {
//     int arr[]={2,4,8,8,8,8,8,56};
//     int size=8;
//     int target=8;
//     cout<<firstocc(arr,size,target);
// }

// int lastocc(vector<int>arr,int n,int t)
// {
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e)
//     {
//         if(arr[mid]==t)
//         {
//             ans=mid;
//             s=mid+1;
//         }
//         else if(arr[mid]<t)
//         s=mid+1;
//         else
//         e=mid-1;
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int main()
// {
//     vector<int>arr{1,2,3,4,4,4,4,4,4,4,4,4,4,5,6,7,8};
//     int size=arr.size();
//     int target=4;
//     cout<< lastocc(arr,size,target);
//     return 0;

// }

// int mount(vector<int>arr,int n)
// {
//     int s=0,e=n-1;
//     int mid=s + ( e - s )/2;
//     while(s<e)
//     {
//         if(arr[mid]<arr[mid+1])
//         {
//             s=mid+1;
//         }
//         else
//         {
//             e=mid;
//         }
//         mid=s + ( e - s )/2;
//     }
//     return e;
//     //return s;
// }
// int main()
// {
//     vector<int>arr{0,2,3,4,10,5,2};
//     int size=arr.size();
//     //int target=4;
//     cout<< mount(arr,size);
//     return 0;
// }

// finding pivot element
// sorted and rotated
//  int pivot(vector<int>arr,int n)
//  {
//      int s=0,e=n-1;
//      int mid;
//      while(s<e)
//      {
//          mid=s + ( e - s )/2;
//          if(arr[mid]>=arr[0])
//          {
//              s=mid+1;
//          }
//          else
//          {
//              e=mid;
//          }
//          //mid=s + ( e - s )/2;
//      }
//      //return e;
//      return s;
//  }
//  int main()
//  {
//      vector<int>arr{7,9,1,2,3};
//      int size=arr.size();
//      cout<< pivot(arr,size);
//      return 0;
//  }















//searching in roteted sorted array
// int pivot(vector<int> arr, int n)
// {
//     int s = 0, e = n - 1;
//     int mid;
//     while (s < e)
//     {
//         mid = s + (e - s) / 2;
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//         // mid=s + ( e - s )/2;
//     }
//     // return e;
//     return s;
// }
// int search(vector<int> arr, int st, int end, int t)
// {
//     // int st = 0, end = n - 1;
//     int mid = (st + end) / 2;
//     while (st <= end)
//     {
//         if (arr[mid] == t)
//             return mid;
//         else if (arr[mid] > t)
//             end = mid - 1;
//         else
//             st = mid + 1;

//         mid = (st + end) / 2;
//     }

//     return -1;
// }
// int main()
// {
//     vector<int> arr{7, 9, 1, 2, 3};
//     int n = arr.size();
//     int k = 3;
//     int p = pivot(arr, n);
//     if (k >= arr[p] && k <= arr[n - 1])
//         cout << search(arr, p, n - 1, k);
//     else
//         cout << search(arr, 0, n - 1, k);
//     return 0;
// }


//square root
// int rooto(int n)
// {
//     int s=0,e=n;
//     int mid,ans=-1;
//     while(s<=e)
//     {
//         mid=s+(e-s)/2;
//         if(mid*mid==n)
//         return mid;
//         else if(mid*mid>n)
//         e=mid-1;
//         else
//         {
//             ans=mid;
//         s=mid+1;
//         }

//     }
//     return ans;
// }
// int main()
// {

//     int n;
//     cin>>n;
//     cout<< rooto(n);
// }









