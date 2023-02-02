#include<iostream>
#include<vector>
using namespace std;
int lastindexoccbinarysearch(vector<int> &v, int n, int m)
{
    int high = n - 1;
    int low = 0;
    int ans = -1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (v[mid] == m)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (v[mid] < m) 
            high = mid - 1;

        else
        { 
            low = mid + 1;
        }
    }
    return ans; 
}

int main()
{
    int n; // we input the size of the array
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    vector<int> v; // we make the vector array
    int ele;
    for (int i = 0; i < n; i++)
    { // taking the input of the array elements
        cout << "Enter the element : ";
        cin >> ele;
        v.push_back(ele);
    }
    int m; // taking the input of the element to be found
    cout << "Enter the element to be found  : ";
    cin >> m;
    cout << "The rightmost index of the array is : " << lastindexoccbinarysearch(v, n, m);
}