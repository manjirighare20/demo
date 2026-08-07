// #include <iostream>
// using namespace std;

// int main(){
//    int age;

//     cout << "enetr the age:";
//     cin >> age;
//     cout <<"you age :"<< age << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout<<(8<5)<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//  int n=-45;
//     if(n>0){
//         cout<<"n is positive";
//     }else{
//         cout<<"n is negetive";
//     }

//    return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//   int age=19;
//     if(age>18){
//         cout<<"eligiable for voting";
//     }else{
//         cout<<"not eligiable for voting";
//     }

//    return 0;
// }

//   int num
// #include <iostream>
// using namespace std;

// int main()
// {
//   char ch;
//   cout<<"enetr the charecter";
//   cin>>ch;
//   if(ch>='a' && ch<='z'){
//      cout<<"lowercase";
//   }else{
//      cout<<"uppercase";
//   }
//    return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n=12

//     while(int i <=n){
//         if(i%2==0){
//             cout<<"even no:";
//             i++;

//         }
//     } sum+=i
//     return 0;
// }
// divisible by 3 code
// #include<iostream>
// using namespace std;
// int main(){
// int n=10;
// for( int i=1;i<=n;i++){
//     if(i%3==0){
//        cout<<"div by 3";
//     }else{
//         cout<<"not div by 3";
//     }
//     cout<<i;
//     cout<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch='C';
//     for(char i='A';i<=ch;i++){
//         for(char j='A';j<=ch;j++){
//             cout<<j;
//         }
//       cout<<endl;
//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=26;

//     for(int i=1;i<=n;i++){
//         char ch='A';
//         for(int j=1;j<=n;j++){
//             cout<<ch;
//             ch = ch+1;
//         }
//       cout<<endl;
//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num=1;
//     int n=2;

//     for(int i=0;i<=n;i++){
//         for(int j=0;j<i+1;j++){
//          cout<<num;

//         }
//         num++;

//       cout<<endl;
//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int n=2;

//     for(int i=0;i<=n;i++){
//         for(int j=0;j<i+1;j++){
//          cout<<"* ";

//         }

//       cout<<endl;
//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num=1;
//     int n=2;

//     for(int i=0;i<=n;i++){
//         for(int j=0;j<i+1;j++){
//          cout<<num;
//         num++;
//         }

//       cout<<endl;
//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch='A'
//     int n=5;

//     for(int i=0;i<=n;i++){
//         for(int j=0;j<i+1;j++){
//          cout<<ch;

//         }

//       ch++;

//       cout<<endl;
//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num=1;
//     int n=5;

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j>0;j--){
//          cout<<j;
//         num++;
//         }

//       cout<<endl;
//     }

// return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int num =1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//             for(int j=0;j<n-i;j++){
//                 cout<<(i+1);

//             }
//             cout<<endl;

//     }

// return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     int num=1;
//     for(int i=1;i<n;i++){
//         for(int j=1;j<i+1;j++){
//             cout<<j;

//         }
//         num++;
//         cout<<endl;
//     }
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;

//     for(int i=0;i<n;i++){

//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";

//         }
//         for(int j=1;j<=i+1;j++){
//             cout<<j;

//         }
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }

// return 0;

// }
//    1
//   121
//  12321
// 1234321

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){

//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i!=0){

//         for(int j=0;j<2*i-1;j++){
//             cout<<" ";

//         }
//         cout<<"*";
//     }
//     cout<<endl;
// }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i!=n-1){

//         for(int j=0;j<2*(n-i)-4;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//     }
//     cout<<endl;
//     }

//     return 0;

// }
// output
//    *
//   * *
//  *   *
// *     *
//  *    *
//   *  *
//    *

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         if(i==0||i==n-1){
//             for(int j=0;j<n;j++){
//                 cout<<"*";
//             }
//         }
//         else{
//             cout<<"*";
//             for(int j=0;j<n-2;j++){
//                 cout<<" ";

//             }
//             cout<<"*";

//         }
//         cout<<endl;
//     }
//     return 0;
// }
// output
// ****
// *  *
// *  *
// ****

#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i > 0)
        {

            for (int j = 1; j <= 2 * i; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
