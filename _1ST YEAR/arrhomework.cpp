#include <iostream>
#include <bits/stdc++.h>
#include<limits.h>
using namespace std;

//color sort 3 approcchs
// int main()
// {
//     int arr[]={2,0,2,1,1,0};
//     int size=6;
//     sort(arr,arr+size);
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




// int color(int arr[],int n)
// {
//     int two=0,one=0,zero=0;
//    for(int i=0;i<n;i++)
//     {
//         if(arr[i]==0)
//         zero++;
//         else if (arr[i]==1)
//         one++;
//         else
//         two++;
//     }
//    int i=0;
//    while(zero--)
//    {
//     arr[i]=0;
//     i++;
//    }
//    while(one--)
//    {
//     arr[i]=1;
//     i++;
//    }
//    while(two--)
//    {
//     arr[i]=2;
//     i++;
//    }
// }

// int main()
// {
//     int arr[]={2,0,2,1,1,0};
//     int size=6;
//     color(arr,size);
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }





// int color(int arr[],int n)
// {
//     int mid=0;
//     int high=n-1;
//     int low=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[mid]==0)
//         {
//             swap(arr[low],arr[mid]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid]==1)
//         {mid++;}
//         else{
//             swap(arr[mid],arr[high]);
//             high--;
//             //mid++;
//         }
//     }
    

// }

// int main()
// {
//     int arr[]={2,0,2,1,1,0};
//     int size=6;
//     color(arr,size);
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }





























//SEPERATE  POSITIVE AND NEGATIVES
// int posneg(int arr[],int n)
// {
//     vector<int>pos;
//     vector<int>neg;
    

//     for(int i=0;i<n;i++)
//     {
//        if(arr[i]>0)
//        pos.push_back(arr[i]);
//        else
//        neg.push_back(arr[i]);
//     }
//     for(int i=0;i<neg.size();i++)
//     {cout<<neg[i]<<" ";
//     }
//     for(int i=0;i<pos.size();i++)
//     {
//         cout<<pos[i]<<" ";
//     }
// }


// int main()
// {
//     int arr[]={1,2,-3,4,-5,6};int size=6;
//     posneg(arr,size);
    
//     return 0;;
// }



//dutch natonal flag alogorithm
//two pointer approch
// int posneg(int arr[],int n)
// {
//     int high=n-1;
//     int low=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[low]<0)
//         {
            
//             low++;
//         }
//         else if(arr[high]>0)
//         {
//             high--;
//         }
//         else
//         {
//             swap(arr[low],arr[high]);
//         }
        
//     }
    

// }



// int main()
// {
//     int arr[]={1,2,-3,4,-5,6};int size=6;
//     posneg(arr,size);
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;;
// }
























// int finddup(int arr[],int n)
// {
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]==arr[i+1])
    //     return arr[i];
    // }



    //visited solution
    // int ans=-1;
    // for(int i=0;i<n;i++)
    // {
    //     int index=abs(arr[i]);
        

    //     //already visited
    //     if(arr[index]<0)
    //     {
    //         ans=index;
    //         break;
    //     }
    //     //visited mark
    //     arr[index]=arr[index]*-1;
    // }
    // return ans;





    //positioning method
//     while(arr[0]!=arr[arr[0]])
//     {
//         swap(arr[0],arr[arr[0]]);
//     }
//     return arr[0];
// }
































// int findmiss(int arr[], int n )
// {
//     //visiting method
//     for(int i=0;i<n;i++)
//    { 
//     int index=abs(arr[i]-1);
//     if(arr[index]>0)
//     {
//         arr[index   ]*=-1;
//     }
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>0)
//         cout<<i+1<<" ";
//     }














// //sorting and swaping method

// //sort(arr,arr+n);
// for(int i=0;i<n-1;i++)
// {
//     // if(arr[i]!=i)
//     // {
//     //     cout<<i<<" ";
//     // }
//     cout<<arr[i]<<" ";
// }










// }
// int main()
// {
//     int arr[]={1,3,5,2,3};
//     int n = 5;
//     cout<<findmiss( arr  , n);
    

// }




// int findmiss(int arr[],int n)
// {
//     // sort(arr,arr+n);
//     // for(int i=0;i<n;i++)
//     // {
//     //     if(arr[i]!=i+1)
//     //     cout<<i+1<<" ";
//     // }





 
    
// }


// // int main()
// // {
// //     int arr[]={1,3,5,3,4};
// //     int n=5;
// //     findmiss(arr,n);
// //     return 0;
// // }







// int firstocc(int arr[],int n)
// {
//     // for(int i=0;i<n;i++)
//     // {
//     //     for(int k=i+1;k<n;k++)
//     //     {
//     //         if(arr[k]==arr[i])
//     //         {
//     //             //cout<<arr[k]<<" ";
//     //             return arr[k];
//     //                break;
                
//     //         }
            
//     //     }
        
        
//     // }
//     // return -1;




// }



// int main()
// {
//     int arr[]={1,3,5,3,4,5};
//     int n=6;
//     cout<<firstocc(arr,n);
//     return 0;
// }









//common element in 3 arrays








// int main()
// {
//     int a[]={1,5,10,20,40,80};
//     int b[]={6,7,20,80,100,120};
//     int c[]={3,4,15,20,30,80};
//     int n=6;
//     // for(int i=0;i<n;i<i++)
//     // {
//     //     for(int k=0;k<n;k++)
//     //     {
//     //         for(int j=0;j<n;j++)
//     //         {
//     //             if(a[i]==b[k]&&a[i]==c[j])
//     //             cout<<a[i]<<" ";
//     //         }
//     //     }

//     // }




//     int i,j,k;
//     i=j=k=0;
//     while(i<n&&j<n&&k<n)
//     {
//         if(a[i]==b[j]&&a[i]==c[k])
//         {
//             cout<<a[i]<<" ";
            
//             i++,j++,k++;

//         }
//         else if(a[i]<b[j])
//         {
//             i++;
//         }
//         else if(b[j]<c[k])
//         {
//             j++;

//         }
//         else
//         k++;
//     }
// }






int main()
{
    int a[3][4]={{1,5,9,10},{6,2,3,7},{11,12,8,4}};
    for(int j=0;j<4;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<3;i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
             for(int i=0;i<3;i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
}



//fuckup homework