#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	int low=0,target,c=0;
	cin>>target;
	int high=n;
	while(low<=high){
		int mid =low+(high-low)/2;
		if(ar[mid]==target){
			cout<<mid;
			c++;
			break;
		}
		
		if(ar[mid]<target)
			low=mid+1;
		else
			high=mid -1;

	}
	if(c==0)
		cout<<"-1";
	return 0;

}