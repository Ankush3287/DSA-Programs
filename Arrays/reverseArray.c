#include<stdio.h>
void reverse(int a[],int n){
    int low=0, high=n-1;
    while(low<high){
        int temp=a[low];
        a[low]=a[high];
        a[high]=temp;
        low++;
        high--;
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
int main(){
    int a[]={10,5,7,30,24};
    int n=5;
    reverse(a,n);
    return 0;
}