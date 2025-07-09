#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int found;
    cin>>found;
    for(int i=0; i<n; i++){
        if(found==arr[i]){
            cout<<"found";
            return 0;
        }
    }
    cout<<"not found";
}