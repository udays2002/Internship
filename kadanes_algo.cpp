#include<iostream>
#include<vector>
using namespace std;
long long kadanes_algo(int arr[],int n){
    int curr_sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        curr_sum=max(curr_sum+arr[i],arr[i]);
        if(curr_sum>max_sum){
             max_sum=curr_sum;
        }
    }
        
    return max_sum;
}
int main(){
   int arr[4]={-1,-2,-3,-4};
   cout<<kadanes_algo(arr,4);
}