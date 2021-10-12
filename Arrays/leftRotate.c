#include<stdio.h>
void rotateByOne(int a[],int n){
    int temp=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
}
void rotateByX(int a[],int n,int x){
    for(int i=1;i<=x;i++){
        rotateByOne(a,n);
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    int x=5;
    rotateByX(a,n,x);
    return 0;
}