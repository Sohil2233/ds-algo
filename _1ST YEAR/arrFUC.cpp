#include<iostream>
#include<vector>

using namespace std;

//int findkey(int arr[],int size,int key)
//{
//	for(int i=0;i<size;i++)
//	{
//		if(arr[i]==key)
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[]={5,4,6,3,7,2};
//	int size=6;
//	int key;
//	cout<<"enter key ";
//	cin>>key;
//	if(findkey(arr,size,key))
//	{
//		cout<<"key present";
//		
//	}
//	else
//	cout<<"absent";
//}



//int findkey(int arr[],int size,int key)
//{
//	int count=0;
//	for(int i=0;i<size;i++)
//	{
//		if(arr[i]==key)
//		//arr[i]=-1;
//		count=count +1;
//	}
//	for(int i=0;i<size;i++)
//	{
//		cout<<arr[i];
//	}
//	return count;
//}
//
//int main()
//{
//	int arr[]={5,4,6,4,7,4};
//	int size=6;
//	int key;
//	cout<<"enter key ";
//	cin>>key;
//	int cnt=findkey(arr,size,key);
//	cout<<endl<<cnt;
//}

 
//	void inc(int brr[],int n)
//	{
//		brr[0]=brr[0]+10;
//		cout<<brr[0]<<brr[1];	
//	} 
//	
// 	int main()
// 	{
// 		int arr[]={1,6};
// 		int size=2;
// 		inc(arr,size);
// 		cout<<arr[0]<<" "<<arr[1];
//		 	 }






	
//int maxfun(int arr[],int size)
//{
//	int max=INT_MIN;
//	for(int i=0;i<size;i++)
//	{
//		if(max<arr[i])
//		{
//			max=arr[i];
//		}
//	}
//	return max;
//}
//
//
//int main()
//{
//	int arr[]={5,6,7,9,3,5,6};
//	int size=7;
//	int max=maxfun(arr,size);
//	cout<<max;
//	return 0;
//}






//extereme printing in array
//void extrprint(int arr[],int size)
//{
//	for(int i=0;i<size-i;i++)
//	{
//		cout<<arr[i]<<" ";
//		cout<<arr[size-i-1]<<" ";
//	}
//}
//
//
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8};
//	int size=8;
//	extrprint(arr,size);
//	return 0;
//}



    // //unique element
    // int findunique(vector<int>arr)
    // {
    //     int ans=0;       
    // for(int i=0;i<arr.size();i++)
    // {
    //    ans=ans^arr[i];
    // }
    // return ans;
    // }
    // int main() 
    // {
    //       int n;
    //     cout<<"enter size of arr "<<endl;
    //     cin>>n;
    //     vector<int>arr(n);
    //     cout<<" enter the elements  "<<endl;
    // for(int i=0;i<arr.size();i++)
    // {
    //     cin>>arr[i];
    // }
    // int unique=findunique(arr);
    // cout<<"unique elemen si  "<<unique;
    // }




    //union of 2 array
//     int main()
//     {
//         int arr[]={1,3,5,7,9};
//         int sizeA=5;
//         int brr[]={2,4,6,8};
//         int sizeB=4;
//         vector<int>ans;
//         //pushing element of arr
//     for(int i=0;i<sizeA;i++)
//     {
//         ans.push_back(arr[i]);
//     }
//   //pushing element of brr
//     for(int i=0;i<sizeB;i++)
//     {
//         ans.push_back(brr[i]);
//     }
//     //printing all elment
//     for(int i=0;i<ans.size();i++)
//     {
//         cout<<ans[i]<<"  ";
//    }

//     }




// //intersection of two array

// int main()
// {
//     vector<int>a{1,2,3,4,6,8};
//     vector<int>b{3,3,4,9,7};
//     vector<int >ans;
//    for(int i=0;i<a.size();i++)
//     {
//            int element=a[i];
//            for(int j=0;j<b.size();j++)
//          {
//             if(element==b[j]){
//                 //marks
//                 b[j]=-1;
//             ans.push_back(element);
//                         }
//                 }
//     }
//    for(int i=0;i<ans.size();i++)
//     {
//        cout<<ans[i]<<"  ";
//    }
// }

// //doubt
// int main()
// {
//     vector<int>arr{1,2,3,5,3,4,6,6,7};
//    // vector<int>ans;
//     for(int i=0;i<arr.size();i++)
//     {
//            int element=arr[i];
//            for(int j=0;j<arr.size();j++)
//          {
//             if(element==arr[j]){
//                 //marks
//                 arr[j]=-1;
//             }
//                 }
//                // ans.push_back(element);
//     }
//        for(int i=0;i<arr.size();i++)
//     {
//         if(arr[i]!=-1)
//        cout<<arr[i]<<"  ";
//    }
// }



//pair sum
// int main()
// {
//     vector<int>arr{10,20,30,40,50,60,70};
//     for(int i=0;i<arr.size();i++)
//     {
//         int ele=arr[i];
//         for(int k=i+1;k<arr.size();k++)
//         {
//             if(arr[i]+arr[k]==90)
//             cout<<arr[i]<<" "<<arr[k]<<endl;
//         }
//     }
// }

 


//sort 0&1's
// int main()
// {
//     vector<int>arr{0,1,0,1,1,0,1,0,1,0,1,1};
//     int strt=0;
//     int end=arr.size()-1;
//     int i=0;
//     while(strt<end)
//     {
//         if(arr[i]==0)
//         {
//             swap(arr[strt],arr[i]);
//             i++;
//             strt++;
//         }
//         else{
//             swap(arr[i],arr[end]);
//             end--;
//             i++;
             
//         }
//     }
//     for(int i=0;i<arr.size();i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }




//rotate arr left by 1 element
// void solve(int arr[], int n) {
//   int temp = arr[0]; 
//   for (int i = 0; i < n - 1; i++) {
//     arr[i] = arr[i + 1];
//   }
//   arr[n - 1] = temp; 
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }

// }
// int main() {
//   int n=5;
  
//   int arr[]= {1,2,3,4,5};
//   solve(arr, n);
// }





