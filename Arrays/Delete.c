#include<stdio.h>
int delete(int arr[],int n,int x){
    int i;
    for (i = 0; i < n; i++){
        if(arr[i]==x)
            break;
    }
    if(i==n)
        return n;
    for(int j=i+1;j<n;j++)
        arr[j-1]=arr[j];
    return n-1;
}
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int x;
    scanf("%d",&x);
    int k=delete(arr,n,x);
    for(int i=0;i<k;i++)
        printf("%d ",arr[i]);
    return 0;
}