#include<stdio.h>
#define MAX 10000
int Arr[MAX];
void Merge(int low,int mid,int high){
	int n1=mid-low+1,n2=high-mid,i,j,k=0;
	int left[n1],right[n2],c[high-low+1];
	for(i=0,k=low;i<n1;left[i++]=Arr[k++]);
	for(i=0,k=mid+1;i<n2;right[i++]=Arr[k++]);
	k=0;
	for(i=0,j=0;i<n1&&j<n2;){
		if(left[i]<right[j]) c[k++]=left[i++];
		else c[k++]=right[j++];
	}
	if(i==n1) for(;j<n2;c[k++]=right[j++]);
	else for(;i<n1;c[k++]=left[i++]);
	for(i=low,k=0;i<=high;Arr[i++]=c[k++]);
}
void Mergesort(int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		Mergesort(low,mid);
		Mergesort(mid+1,high);
		Merge(low,mid,high);
	}
}
int main(){
	int n,l=0,h,i;
	printf("Enter N:");	
	scanf("%d",&n);
	h=n-1;
	for(i=0;i<n;scanf("%d",&Arr[i++]));
	Mergesort(l,h);
	for(i=0;i<n;printf("%d\t",Arr[i++]));
	return 0;
}	
		
