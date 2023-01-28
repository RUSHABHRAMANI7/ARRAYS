#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&v,int low ,int high , int x ){
    int mid = (high + low)/2 ; 
    if (low >high) // base condition if the element is not present in the array 
    return -1 ; 
    if (v[mid]==x)// if the element is found then the index is returned 
    return mid ; 
    else if (v[mid]>x){  // if the element is greater than the mid element than the lower is set to mid +1 
    binarysearch(v,mid+1,high,x); 

    }
    else {
    binarysearch(v,low,mid-1 ,x); // if the element is smaller than the mid element than the higher limit is set to mid -1 

    }

    }

int main(){

    int n; // we input the size of the array 
    cout << "Enter the size of the array : " << endl ; 
    cin>>n; 
    vector<int>v; // we make the vector array 
    int ele; 
    for(int i = 0 ; i<n; i++){ // taking the input of the array elements 
        cout << "Enter the element : " ; 
        cin>>ele; 
        v.push_back(ele); 
    }
      int m ; // taking the input of the element to be found 
      cout << "Enter the element : "; 
      cin>>m;
      int low =0 , high = n-1 ; 
      cout <<  binarysearch(v,low ,high ,m); 

}