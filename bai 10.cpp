#include<iostream>
using namespace std;
int tong_chan(int arr[],int n){
 if(n == 0 ||n==1)
return 0;
if(arr[0]%2==0)
return arr[0]+tong_chan(arr+1,n-1);
else
return tong_chan(arr+1,n-1);
}
int main(){
	int arr[]={1,2,3,4,5,6,6,7,5,6,};
	int n=sizeof(arr)/sizeof(arr[0]);
	int tong=tong_chan(arr,n);
	cout<<"tong cac pphan tu chan trong mang la:"<<tong<<endl;
	return 0;
}