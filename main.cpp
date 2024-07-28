#include <iostream>

using namespace std;

int pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid]>arr[0]){
            s = mid;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;

    }
    return s;
}

int main() {
        int arr[7]={5,6,7,9,24,2,4};
        int result = pivot(arr,7);
        cout<<"pivot element is on index " <<result;
        return 0;
}
