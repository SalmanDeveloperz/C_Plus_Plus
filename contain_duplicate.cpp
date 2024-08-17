#include<iostream>
using namespace std;
bool duplicate(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    system("CLS");
    int arr[5]={1,2,3,4,1};
    if(duplicate(arr, 5)){
        cout<<"Showing";
    }
    else{
        cout<<"Not showing";
    }

    return 0;
}