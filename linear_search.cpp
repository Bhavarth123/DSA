#include<iostream>
using namespace std;
int linearsearch(int a[],int size, int target){
    for(int i = 0;i<size;i++){
        if(a[i] == target){
             return i;
        }
    }
    return -1;

}

int main(){
    cout<<"Enter Size \n";
    int size;
    cin>>size;
    int arr[size];
    cout<<"\nenter elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter Target\n";
    int target;
    cin>>target;
    int index = linearsearch(arr, size, target);
    if(index==-1){
        cout<<"Not found";
    }else{
        cout<<"Found at "<<index;
    }
    return 0;
}