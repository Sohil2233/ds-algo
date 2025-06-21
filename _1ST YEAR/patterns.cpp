#include<iostream>
using namespace std;
int main()
{
//	//solid rectangle
//	for (int i=0;i<3;i++)//rows
//	{
//		for(int k=0;k<5;k++)//columns
//		{
//			cout<<" * ";
//		}
//		cout<<endl;
//	}
	
	
	//solid square
//	for (int i=0;i<3;i++)//rows
//	{
//		for(int k=0;k<3;k++)//columns
//		{
//			cout<<" * ";
//		}
//		cout<<endl;
//	}

//mere man se honga
//int n;
//cin>>n;
//for (int i=0;i<n;i++)//rows
//	{
//		for(int k=0;k<n;k++)//columns
//		{
//			cout<<" * ";
//		}
//		cout<<endl;
//	}


//hollow rectangle
//for (int i=1;i<=4;i++)//rows
//{
//	for(int k=1;k<=4;k++)
//	{
//		if((i==1)||(i==4)||
//		(k==1)||(k==4))
//		{
//			cout<<" * ";
//		}
//		else
//		{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//	
//}

// int i, j;
//    for (i = 1; i <= 5; i++)
//    {
//        for (j = 1; j <= 5; j++)
//        {
//            if (i == 1 || i == 5 ||
//                j == 1 || j == 5)        
//                cout << "*";            
//            else
//                cout << " ";
//        }
//        cout << endl;
//    }	




//	//half pyramid
//	for (int i=0;i<5;i++)//rows
//	{
//		for(int k=0;k<i+1;k++)//columns
//		{
//			cout<<" * ";
//		}
//		cout<<endl;
//	}



//	//inverted half pyramid
//		for (int i=0;i<5;i++)//rows
//	{
//		for(int k=i;k<5;k++)//columns
//		{
//			cout<<" * ";
//		}
//		cout<<endl;
//	}


//numeric half pyramid
//	for (int i=0;i<5;i++)//rows
//	{
//		for(int k=0;k<i+1;k++)//columns
//		{
//			cout<<k+1;
//		}
//		cout<<endl;
//	}

//inverted numeric half pyramid
	//inverted half pyramid
//		for (int i=0;i<5;i++)//rows
//	{
//		for(int k=0;k<5-i;k++)//columns
//		{
//			cout<<k+1;
//		}
//		cout<<endl;
//	}





//my authentic hollow sphere
//		for(int i=0;i<3;i++)
//		{
//			if(i==0||i==2)
//				{
//			for(int k=0;k<4;k++)
//			{
//				
//					cout<<" * ";
//			}	}
//				else
//				{
//					cout<<" * ";
//					for(int a=0;a<2;a++)
//					{
//						cout<<"   ";
//					}
//					cout<<" * ";
//				}
//			
//			cout<<endl;
//		}		






////hollow square
//int n;
//cin>>n;
//
//for(int i=0;i<n;i++)
//{
//	for(int k=0;k<n;k++)
//	{
//		if(i==0||i==(n-1)||k==0||k==(n-1))
//		cout<<"*";
//		else
//		cout<<" ";
//	}
//	cout<<endl;
//}

//hoolow invetred half pyramid
//int n;
//cin>>n;
//
//	for (int i=0;i<n;i++)//rows
//	{
//		for(int k=0;k<n-i;k++)//columns
//		{
//			if(i==0 || k==0 || k==(n-i-1))
//			cout<<"*";
//			else
//			cout<<" ";
//		}
//		cout<<endl;
//	}
//



////full pyramid
//int n=3;
//
//for(int i=0;i<n;i++)
//{
//	int k=0;
//	for(int j=0;j<((2*n)-1);j++)
//	{
//		if(j<(n-i-1))
//		{
//			cout<<" ";
//		}
//		else if(k<((2*i)+1))
//		{
//			cout<<"*";
//		}
//		else
//		{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}

//
//
//
//// C++ code to demonstrate star pattern
//#include <iostream>
//using namespace std;
//
//// Function to demonstrate printing pattern
//void pypart2(int n)
//{
//	// Number of spaces
//	int i, j, k = n;
//
//	// Outer loop to handle number of rows
//	// n in this case
//	for (i = 1; i <= n; i++) {
//
//		// Inner loop for columns
//		for (j = 1; j <= n; j++) {
//
//			// Condition to print star pattern
//			if (j >= k)
//				cout << "* ";
//			else
//				cout << " ";
//		}
//		k--;
//		cout << "\n";
//	}
//}
//
//// Driver Code
//int main()
//{
//	int n = 5;
//	// Function Call
//	pypart2(n);
//	return 0;
//}
//

















//jo samjha aaya
//for(int i=1;i<=5;i++)
//{
//	for(int j=5;j>i;j--)
//	{
//		cout<<" ";
//	}
//	for(int k=1;k<=i;k++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}
//outout
//    *
//   * *
//  * * *
// * * * *
//* * * * *



//for(int i=1;i<=5;i++)
//{
//	for(int j=5;j>i;j--)
//	{
//		cout<<" ";
//	}
//	for(int k=1;k<=((i*2)-1);k++)
//	{
//		cout<<"*";
//	}
//	cout<<endl;
//}

////output
//    *
//   ***
//  *****
// *******
//*********






// for(int i=1;i<=5;i++)
// {
// 	for(int j=5;j>i;j--)
// 	{
// 		cout<<" ";
// 	}
// 	for(int k=1;k<=((i*2)-1);k++)
// 	{
// 		if( k==1 || k==(2*i)-1 || i==5 )
// 		cout<<"*";
// 		else
// 		cout<<" ";
// 	}
// 	cout<<endl;
// }
//
//output
//    *
//   * *
//  *   *
// *     *
//*********





//for(int i=1;i<=5;i++)
//{
//	for(int j=1;j<=i-1;j++)
//	{
//		cout<<" ";
//	}
//	for(int k=1;k<5-i+1 ;k++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}
//output
//* * * *
// * * *
//  * *
//   *







//for(int i=1;i<=5;i++)
//{
//	for(int j=5;j>i;j--)
//	{
//		cout<<" ";
//	}
//	for(int k=1;k<=i;k++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}
//
//for(int i=1;i<=6;i++)
//{
//	for(int j=1;j<=i-1;j++)
//	{
//		cout<<" ";
//	}
//	for(int k=1;k<6-i+1 ;k++)
//	{
//		cout<<"* ";
//	}
//	cout<<endl;
//}
//utput
//    *
//   * *
//  * * *
// * * * *
//* * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *




for(int i=1;i<=5;i++)
{
	for(int j=5;j>i;j--)
	{
		cout<<" ";
	}
	for(int k=1;k<=((i*2)-1);k++)
	{
		if( k==1 || k==(2*i)-1 )
		cout<<"*";
		else
		cout<<" ";
	}
	cout<<endl;
}

for(int i=1;i<6;i++)
{
	for(int j=1;j<=i-1;j++)
	{
		cout<<" ";
	}
	for(int k=1;k<5-i+1 ;k++)
	{
		if( k==1 || k==(2*5)-1 )
		cout<<"* ";
		else
		cout<<" ";
	}
	cout<<endl;
}



}
