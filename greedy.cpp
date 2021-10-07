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
// #include<iostream>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// int main(){
// int n,k;
// int count=0;
// cin>>n>>k;
// while(n>=k){
//   while(n%k!=0){
//     n-=1;
//     count++;
//   }
//   n/=k;
//   count++;
// }
// while (n>1){
//   n-=1;
//   count++;
// }
// cout<<count<<endl;
// }
//기출1
// #include <iostream>
// #include <algorithm>
// using namespace  std;
// bool compare(int a, int b){
//   return a>b;
// }
// int main(){
//   int num, group=0, person=0;
//   cin>>num;
//   int array[num];
//   for(int i=0; i<num; i++)
//     cin>>array[i];
//   sort(array, array+num);
//   for(int i=0; i<num; i++)
//   {
//       person++;
//       if(array[i]<=person){
//           group++;
//           person=0;}
//   }
//   cout<<group<<endl;
// }
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// using std::stoi;

// int main(){
//   string s;
//   int total;
//   vector<int> v;
//   getline(cin, s);

//   string split="";
//   for(int i=0; i<s.length(); i++){
//     split=s.at(i);
//     v.push_back(atoi(split.c_str()));
//   }
//   for(int i=0; i<v.size(); i++)
//     cout<<v[i]<<" ";
//   if(v[0]==0)
//     total = 0;
//   else
//     total=v[0];
//   for (int i=0; i<v.size(); i++){
//   if(v[i]==0&&(i+1)!=v.size())
//         total +=v[i+1];
//   else{
//     total *=v[i+1];
//   }
// }
//     cout<<total<<endl;
// }
//기출3
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//   string s;
//   char c_s[1000000];
//   int count[100000];
//   int count_v[10000];
//   int count_i=0;
//   int value=1;
//   int flag;
//   int flag_v=1;
//   getline(cin, s);
//   strcpy(c_s, s.c_str());
  
//   for(int i=1; i<s.length(); i++){
//     if((int)c_s[i-1]==(int)c_s[i]){
//         value++;
//         count[count_i]=value;
//         count_v[count_i]=(int)c_s[i]-48;
//   }else{
//         value=1;
//         count_i++;
//   }
//   }
// flag=count_v[0];
//  for(int i=1; i<=count_i; i++){
//    if(flag==count_v[i])
//     flag_v++;
//  }
//  if(flag_v>=count_i-flag_v)
//     cout<<count_i-flag_v+1<<endl;
//   else
//     cout<<flag_v+1<<endl;
// }
//기출4
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// bool value(int a, int b){return a>b;}
// int main(){
//   int count;
//   int flag=0;
//   cin>>count;
//   int array[count];
//   for(int i=0; i<count;i++){
//     cin>>array[i];
//   }
//   sort(array,array+count);
//   int total=0;
// for(int i=0;i<count; i++){
//     total+=array[i];
//   }
//   int fin=1;
//   int current=0;
//   vector<int> v;

//   while(fin<=count){
//     for(int i=0; i<count; i++){
//       v.push_back(array[i]);
//     }
//   }
// }
//기출5
// #include<iostream>
// using namespace std;
// int main(){
//   int count, weight;
//   int total=0;
//   cin>>count>>weight;
//   int array[count];
//   for(int i=0; i<count; i++)
//     cin>>array[i];
//   for(int i=0; i<count; i++)
//       for(int j=i+1; j<count;j++)
//         if(array[i]!=array[j])
//             total++;
//   cout<<total<<endl;
// }
//기출6

#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(vector<int> food_times, long long k) {
    int answer = 0;
    int j=0;
   while(j<=k){
       if(food_times[j%3]!=0){
           food_times[j%3]-=1;
           j++;
           if(food_times[j%3]==0)
               j++;
       }else{
           j +=2;
       }
   }
    for(int i=0; i<food_times.size(); i++)
        if(food_times[i]!=0){
            answer=i+1;
            break;
        }
    return answer;
}
int main(){
  vector<int> v={1,3,2};
  int k=5;
  cout<<solution(v,k);
}
