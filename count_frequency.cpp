#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ele;
    cout << "Enter the element to find freq: ";
    cin >> ele;

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == ele){
            cnt++;
        }
    }
    cout << "No. of elements: " << cnt;
    return 0;
}