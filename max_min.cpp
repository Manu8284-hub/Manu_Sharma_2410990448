#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[0]<arr[i]){
            max=arr[i];
        }
        if(arr[0]>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Maximum in array: "<<max<<endl;
    cout<<"Minimum in array: "<<min;
}
