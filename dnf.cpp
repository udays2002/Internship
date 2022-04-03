#include<iostream>
#include<vector>
using namespace std;
vector<int>dutch_national_flag(vector<int>arr){
    int n=arr.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
       if(arr[mid]==0){
           int temp=arr[mid];
           arr[mid]=arr[low];
           arr[low]=temp;
           low++;
           mid++;

       }
       if(arr[mid]==2){
           int temp=arr[mid];
           arr[mid]=arr[high];
           arr[high]=temp;
           mid;
           high--;
       }
       if(arr[mid]==1){
           mid++;
       }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return arr;
}
int main(){
    vector<int>arr;
    arr.push_back(0);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(1);
    dutch_national_flag(arr);
    cout<<arr[3];
}
