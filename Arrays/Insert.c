#include<stdio.h>
int insert(int arr[],int pos,int n,int x){
    if(n==10)
        return n;
    for(int i=n-1;i>=pos-1;i--)
        arr[i+1]=arr[i];
    arr[pos-1]=x;
    return n+1;
}
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    int arr[10];
    int pos;
    scanf("%d",&pos);
    getchar();
    int x;
    scanf("%d",&x);
    getchar();
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int k=insert(arr,pos,n,x);
    for(int i=0;i<k;i++)
        printf("%d ",arr[i]);
    return 0;
}