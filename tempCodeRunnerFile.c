#include<stdio.h>
#include<stdlib.h>
int arr[100];
void accept(int arr[],int n){
int i;
for(i=0;i<n;i++)
{
    printf("enter the arr[%d]",i);
    scanf("%d",&arr[i]);
}

}
void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int linear_search(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if (arr[i]==key){
            return i;
        }
    }
            return -1;
}
int main()
{
    int n,key ,pos;
    printf("enetr the total no of  elemnt ");
    scanf("%d",&n);
    accept(arr,n);
    display(arr,n);
    printf("\n enetr the key to search:");
    scanf("%d",&key);
    pos=linear_search(arr,n,key);
    if(pos!= -1)
    {
        printf("%d found at position %d !!!\n",key,pos);
    }
    else{
        printf("%d not found !!!\n",key);
    }
    return 0;
}

