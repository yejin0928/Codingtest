//1
// #include <iostream>
// #include <algorithm>
// using namespace std;

// bool compare(int a, int b){
//   return a > b;
// }
// int main() {
// int n,m,k;
// int total=0;
// cin>>n>>m>>k;
// int *arr=new int[n];
// for(int i=0; i<n; i++){
//   cin>>arr[i];
// }
// sort(arr, arr+n,compare);

// int count1 = m/k;
// int count2= m%k;
// total+=count1*arr[0]*k;
// total+=count2*arr[1];
// cout<<total<<endl;
// }
//2
// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool compare(int a, int b){
//   return a > b;
// }
// int main(){
//   int row,col;
//   int best=9999;
//   cin>>row>>col;
//   int input;
//   int array[col];
//   for(int j=0; j<row; j++){
//      best=9999;
//     for(int i=0; i<col; i++){
//       cin>>input;
//       if(best>=input)
//           best = input;
//   }
//   array[j]=best;
//   }
//   sort(array, array+row, compare);
//   cout<<array[0];
// }
//3--틀림
// #include<iostream>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// int main(){
// int n,k;
// cin>>n>>k;

// int min=1,count=0;
// while(1){
//   if(min<=n){
//     min*=k;
//     count++;
//   }else{
//     break;
//   }
// }
// int min2=n-pow(k,count-1);
// cout<<count-1+min2;
// }
//3보완
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
int n,k;
int count=0;
cin>>n>>k;
while(n>=k){
  while(n%k!=0){
    n-=1;
    count++;
  }
  n/=k;
  count++;
}
while (n>1){
  n-=1;
  count++;
}
cout<<count<<endl;
}