#include<stdio.h>
int rain(int arr[],int n){
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        if(arr[i]>lmax[i-1])
            lmax[i]=arr[i];
        else
            lmax[i]=lmax[i-1];
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]>rmax[i+1])
            rmax[i]=arr[i];
        else
            rmax[i]=rmax[i+1];
    }
    for(int i=1;i<n-1;i++){
        if(rmax[i]<lmax[i])
            res+=rmax[i]-arr[i];
        else
        res+=lmax[i]-arr[i];
    }
    return res;
}    
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int res=rain(arr, n);
    printf("%d",res);
    return 0;
}