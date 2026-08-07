// #include<iostream>
// using namespace std;
// int minoftwo(int a,int b)
//     {
//       if(a<b){
//         return a;
//       }
//       else{
//         return b;
//       }
//     }
// int main()
// {
//     cout<< "min="<<minoftwo(4,7);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int  factorial(int n)
// {
//    int fact=1;

//     for(int i=1;i<=n;i++){
//       fact=fact*i;
//     }
//     return fact;
//   }
// int main()
// {

//   cout <<factorial(5)<<endl;
//   return 0;

// }

// #include<iostream>
// using namespace std;
// int sumofdigit(int num){
//   int digit=0;
//   while(num>0){
//     int lastdigit =num %10;
//     num /= 10;

//     digit+=lastdigit;

//   }
//      return digit;
// }
// int main(){
//   cout<<"sum="<<sumofdigit(2356)<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int prime(int num){

// if(num % 2==0){
//   cout<<"numbere is prime";

// }
// else{
//   cout<<"not prime";
// }return num;
// }
// int main(){
//   cout<<prime(16)<<endl;
//   cout<<prime(14)<<endl;
//   cout<<prime(11)<<endl;
//   cout<<prime(19)<<endl;

//   return 0;
// }

// wrong progrram
// #include<iostream>
// using namespace std;
// int prime(int n){

//     for(int i=2;i<n;i++){
//        if(n%i==0){
//         return false;
//        }
//        return true;
//     }
//   return n;
// }
// int main(){
//   cout<<prime(10)<<endl;
// }

// #include<iostream>
// using namespace std;
// int binary(int decimalno){
//   int ans=0;
//   int pow=1;

//       while(decimalno>0){
//         int rem =decimalno%2;
//         decimalno/=2;

//         ans+=(rem*pow);
//         pow*=10;
//       }
//       return ans;

// }
// int main(){
//   int decimalno=101;
//   cout<<binary(decimalno)<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int dicimal(int binaryno){
//   int ans=0;
//   int pow=1;

//       while(binaryno>0){
//         int rem =binaryno%10;
//         ans+=(rem*pow);
//         binaryno/=10;
//         pow*=2;
//       }
//       return ans;

// }
// int main(){
//   int binaryno=101;
//   cout<<dicimal(binaryno)<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int a=10,b=2;

//   cout<< (a>>b)<<endl;
//   return 0;
// }

// /// array
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int size=4;

//     int a[4]={11,3,13,6};
//     int small=a[0];
//     for(i=0;i<size;i++){

//         if(a[i]<small){
//             small=a[i];

//         }
//     }
// cout<<"small="<<small<<endl;
// return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int size=4;

//     int a[4]={11,3,13,6};
//     int larg=a[0];
//     for(i=0;i<size;i++){

//         if(a[i]>larg){
//             larg=a[i];

//         }
//     }
// cout<<"largest="<<larg<<endl;
// return 0;

// }
// #include<iostream>
// using namespace std;
// int linersearch(int a[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(a[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int a[]={11,4,6,7};
//     int size =4;
//     int target=7;

//     cout<<linersearch(a,size,target)<<endl;
//     return 0;

// }

// #include<iostream>
// using namespace std;
// void reversearrya(int  a[],int n){
//     int start=0;
//     int end=n-1;

//     while(start<end){
//         swap(a[start],a[end]);
//         start++;
//         end--;
//     }

// }
// int main(){
//     int a[]={1,2,3,4,5};
//     int n=5;
//     reversearrya(a,n);
//     for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<char>vec={'a','b','c','d'};
//         //  for(char val : vec)
//         //  {
//             cout<<vec[2]<<endl;

//         //  }
//          return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int size=4;
//     int target=12;

//     int a[4]={11,3,13,6};
//     int small=a[0];

//     for(i=0;i<size;i++){

//         if(a[i]==target){

//             cout<<"target is found:";

//          }
//          else{
//             cout<<"target is not found";
//          }
//     }

// return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int largest;
//     int size =4;
//     int arr[size]={12,32,56,43};

//     largest=arr[0];
//     for(i=0;i<size;i++){
//     if(arr[i]>largest){
//         largest =arr[i];
//     }
// }
// cout<<"largest element="<<largest;
// return 0;
// }

// class solution{
// public:
// int single(vector<int>&num)
// int ans=0
// for(int val: nums){
//     ans^=val
// }
// return ans;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n=4;
//     int arr[4]={2,3,4,5};
//     for(int st=0;st<n;st++)
//     {
//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++){
//                 cout<<arr[i] <<" ";
//             }cout<<endl;
//         }
//     }
//     return 0;
// }
0