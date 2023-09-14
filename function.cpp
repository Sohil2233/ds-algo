#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;





int evensum(int n)
{
	int sum=0;
	for(int i=1;i<=n;i=i+1)
	{
	//	if(i%2==0)
		sum=sum+i;
	}
	return sum;
}
int main()
{
	int n;
	cout<<"enter n ";
	cin>>n;
	int sum=evensum(n);
	cout<<sum;
	return 0;
}










//max of three num
//int maxnum(int x,int y,int z)
//{
//	if(x>y&&x>z)
//	{
//		return x;
//	}
//	else if(y>z&&y>x)
//	{
//		return y;
//	}
//	else
//	return z;
//}
//int main()
//{
//	int a,b,c;
//	cin>>a>>b>>c;
//	int mx=maxnum(a,b,c);
//	cout<<mx;
//	return 0;
//}






////funt decleration + define
//void printnum(int a)
//{
//	a++;
//	cout<<a<<endl;
//}
//int main()
//{
//	int a=5;
//	//fun call
//	printnum(a);
//	
//	cout<<a;
//	return 0;
//}








//void printB(int j)
//{
//	cout<<j;
//}
//void printA(int i)
//{
//	int b=1;
//	cout<<i<<endl;
//	printB(b);
//}
//int main()
//{
//	int a=9;
//	printA(a);
//}





//void uncle()
//{
//	int n;
//	cout<<"ENETR VALUE OF N  ";
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cout<<"k"<<endl;
//	}
//}
//int main()
//{
//	
//	uncle();
//	uncle();
//	
//	
//	
//	
//	
//	
//	
//	
//	
////	for(int i=0;i<n;i++)
////	{
////		cout<<"k"<<endl;
////	}
////	cout<<"ENETR VALUE OF N  ";
////	cin>>n;
////	for(int i=0;i<n;i++)
////	{
////		cout<<"k"<<endl;
////	}
////	cout<<"ENETR VALUE OF N  ";
////	cin>>n;
////	for(int i=0;i<n;i++)
////	{
////		cout<<"k"<<endl;
////	}
////	cout<<"ENETR VALUE OF N  ";
////	cin>>n; 
////	for(int i=0;i<n;i++)
////	{
////		cout<<"k"<<endl;
////	}
//return 0;
//}


//int cntnum(int n)
//{
//	int ld;
//	int count=0;
//	while(n!=0)
//	{
//		ld=n%10;
//		count=count+1;
//		n=n/10;
//	}
//	return count;
//}
//
//int main()
//{
//
//int n;
//cin>>n;
//int cnt=cntnum(n);
//cout<<cnt;
//return 0;
//}


//int formnum(int arr[],int n)
//{
//	int num=0;
//	for(int i=0;i<n;i++)
//	 for(i=0;i<n;i++) {
//        num = num + (arr[i] * pow(10,(double)i));
//    }
//	return num;
//}
//
//int main()
//{
//	int n;
//	int arr[100];
//	cout<<"how many digit you want";
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cout<<"enter the digit "<<i<<endl;
//		cin>>arr[i];
//	}
//	int num=formnum(arr,n);
//	cout<<num;
//	return 0;
//}




// number of set bits
//int countSetBits(int n)
//{
//	int cnt=0;
//	while(n>0)
//	{
//		if(n&1==1)
//		{
//			cnt++;
//		}
//		n=n>>1;
//	}
//	return cnt;
//
//}

//int main()
//{
//	int n ;
//	cin>>n;
//	cout << countSetBits(n);
//	return 0;
//}









//int facto(int n)
//{
//	int fact=1;
//	for(int i=1;i<=n;i++)
//	{
//		fact=fact*i;
//	}
//	return fact;
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//	int fact=facto(n);
//	cout<<fact;
//	return 0;
//}
//long long int






//prime or not
//int prime(int n)
//{
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0 )
//		return 0;
//		else
//		return 1;
//	}
//}
//int main()
//{
//	int n;
//	cin>>n;
//	bool a=prime(n);
//	if(a)
//	cout<<"prime";
//	else
//	cout<<"not prime";
//	return 0;
//}




//check prime
//int checkprime(int n)
//{
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		return false;
//	}
//	return true;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=2;i<=n;i++)
//	{
//		bool isprime=checkprime(i);
//		if(isprime)
//			cout<<i<<" ";
//	}
//	return 0;
//}



//reverse num
//int reverse(int n)
//{
//	int sum=0;
//	int ld;
//	while(n!=0)
//	{
//		ld=n%10;
//		sum=(sum*10)+ld;
//		n=n/10;
//		
//	 } 
//	 return sum;
//}
//int main()
//{
//	int n;
//	cout<<"vvvv";
//	cin>>n;
//	int num=reverse(n);
//	cout<<num;
//	return 0;
//}





//set the kth bit

//int setbit(int n,int k)
//{
//	int mask=1<<k;
//	int ans=n|mask;
//	return ans;
//}
//int main()
//{
//	int n,k;
//	cin>>n>>k;
//	int num=setbit(n,k);
//	cout<<num;
//}













