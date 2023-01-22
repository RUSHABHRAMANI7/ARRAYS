#include<iostream>
#include<vector>
using namespace std ; 
int left_rotate_element(vector<int>&v){
    int low = 0 ; 
    int high = v.size()-1 ; 
    while (low<=high){
        int temp = v[low];
        v[low]= v[high]; 
        v[high] = temp ; 
        high -- ; 
        low ++ ; 
    }
}
int main(){
    int n; 
    cout << " Enter the size of the array "<<endl ; 
    cin >> n; 
    vector<int>v; 
    int ele ; 
    for(int i  = 0 ; i<n; i++ ){
        cout<< " Enter the element of the array " << endl ; 
        cin >>  ele ; 
        v.push_back(ele); 
    }
    left_rotate_element(v); 
    cout << "The element after the rotation is "<< endl ; 
   for(int i  = 0 ; i<n; i++ ){

        cout << v[i] << " "  ; 

    } 

}