// sorted arrya program
//

// #include<stdio.h>
// #include<stdlib.h>
// int arr[100];
// int main(){
//     int i;
//     int n;

//     printf("enetr the value of n:");
//     scanf("%d",&n);

//        printf(" enter the element:");
//        for(i=0;i<n;i++){
//           scanf("%d",&arr[i]);
//        }
//        printf("array elemnt are :");
//        for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//         printf(" ");
//        }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[100];
//     int i;
//     int n;
//     printf("enter the number of n:");
//     scanf("%d",&n);
//     printf("enter the element:");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);

//     }
//     printf("the array is:");
//     for(i=0;i<n;i++){
//         printf("%d\t",arr[i]);

//     }return 0;

// }
// #include<stdio.h>
// int main()
// {
//     int a=5;
//     int b=6;
//     int c=a++ + ++b;
//     printf("%d",&c);
//  return 0;

// }

// #include<stdio.h>
// #include<stdlib.h>
// int arr[100];
// void accept(int arr[],int n){
// int i;
// for(i=0;i<n;i++)
// {
//     printf("enter the arr[%d]",i);
//     scanf("%d",&arr[i]);
// }

// }
// void display(int arr[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
// }
// int linear_search(int arr[],int n,int key)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         if (arr[i]==key){
//             return i;
//         }
//     }
//             return -1;
// }
// int main()
// {
//     int n,key ,pos;
//     printf("enetr the total no of  elemnt ");
//     scanf("%d",&n);
//     accept(arr,n);
//     display(arr,n);
//     printf("\n enetr the key to search:");
//     scanf("%d",&key);
//     pos=linear_search(arr,n,key);
//     if(pos!= -1)
//     {
//         printf("%d found at position %d !!!\n",key,pos);
//     }
//     else{
//         printf("%d not found !!!\n",key);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int arr[100];
// void accept(int arr[],int n){
// int i;
// for(i=0;i<n;i++)
// {
//     printf("enter the arr[%d]",i);
//     scanf("%d",&arr[i]);
// }

// }
// void display(int arr[],int n)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
// }
// int sentinal_search(int arr[],int n,int key)
// {
//     int i;
//     arr[n]=key;
//     for(i=0;arr[i]!=key;i++){}

//        if (i==n)
//        {
//         return -1;
//        }
//        else{
//         return i;
//        }

// }
// int main()
// {
//     int n,key ,pos;
//     printf("enetr the total no of  elemnt ");
//     scanf("%d",&n);
//     accept(arr,n);
//     display(arr,n);
//     printf("\n enetr the key to search:");
//     scanf("%d",&key);
//     pos=sentinal_search(arr,n,key);
//     if(pos!= -1)
//     {
//         printf("%d found at position %d !!!\n",key,pos);
//     }
//     else{
//         printf("%d not found !!!\n",key);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int arr[100];
// void accept(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         printf("enetr arr[%d]", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("\n");
// }
// void display(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
// int binary_search(int arr[], int n, int key)
// {
//     int lb = 0;
//     int ub = n - 1;
//     int mid;
//     while (lb <= ub)
//     {
//         mid = (lb + ub) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (key < arr[mid])
//         {
//             ub = mid - 1;
//         }
//         else
//         {
//             lb = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n, key, pos;
//     printf("enetr the total no of  elemnt ");
//     scanf("%d", &n);
//     accept(arr, n);
//     display(arr, n);
//     printf("\n enetr the key to search:");
//     scanf("%d", &key);
//     pos = binary_search(arr, n, key);
//     if (pos != -1)
//     {
//         printf("%d found at position %d !!!\n", key, pos);
//     }
//     else
//     {
//         printf("%d not found !!!\n", key);
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void accept(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         printf("enter the arr[%d]", i);
//         scanf("%d", &arr[i]);
//     }
// }
// void display(int arr[], int n)
// {
//     int i;
//     printf("\n array");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int bubblesory(int arr[], int n)
// {
//     int i, j;
//     int temp;
//     for (i = n - 1; i > 0; i--)
//     {
//         for (j = 0; j < i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(&arr[j], &arr[j + 1]);
//             }
//         }
//     }
// }
// int main()
// {
//     int n, ch;
//     int data;
//     int arr[100];
//     printf("eneter the value of n:");
//     scanf("%d", &n);
//     accept(arr, n);
//     printf("\n array");
//     display(arr, n);
//     printf("sorted array is:");
//     bubblesory(arr, n);
//     display(arr, n);
// }
#include <stdio.h>
#include <stdlib.h>
int i;
int a[100];
void accept(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter arr[%d]", i);
        scanf("%d", &a[i]);
    }
}
void display(int a[], int n)
{
    int i;
    printf("\n array:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("/n");
}
void merge(int a[], int i1, int j1, int i2, int j2)
{
    int i, j, k;
    int temp[100];
    i = i1;
    j = i2;
    k = 0;
    while (i <= j1 && j <= j2)
    {
        if (a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    while (i <= j1)
    {
        temp[k++] = a[i++];
    }
    while (j <= j2)
    {
        temp[k++] = a[j++];
    }
    for (i = i1, j = 0; i <= j2; i++, j++)
    {
        a[i] = temp[j];
    }
}
void mergesort(int a[], int i, int j)
{
    int mid;
    if (i < j)
    {
        mid = (i + j) / 2;
        mergesort(a, i, mid);
        mergesort(a, mid + 1, j);
        merge(a, i, mid, mid + 1, j);
    }
}
int main()
{
    int n, i, j;
    int a[100];
    printf("enetr the total no of element:");
    scanf("%d", &n);
    accept(a, n);
    display(a, n);
    printf("sorted array :\n");
    mergesort(a, 0, n - 1);
    display(a, n);
}