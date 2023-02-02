#include<iostream>
#include<vector>
using namespace std;
// it returns the first occureneces of the element
int first(vector<int> &v, int n, int m)
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
            high = mid - 1;
        }
        else if (v[mid] < m)
            low = mid + 1;

        else
        {
            high = mid - 1;
        }
    }
    cout << " The first occurenes is : " << ans;
    return ans;
}
// it returns the last occureneces of the element
int last(vector<int> &v, int n, int m)
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
            low = mid + 1;

        else
        {
            high = mid - 1;
        }
    }
    cout << " The last occurences is : " << ans;
    return ans;
}
int occofele(vector<int> &v, int n, int m)
{
    int first1 = first(v, n, m);
    if (first1 == -1)
    {
        return 0; // if the element is not present then it will return 0 directly
    }
    return last(v, n, m) - first1 + 1;
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
    cout << "The number of the elements in the array are : " << occofele(v, n, m); // prints the number of the occurences in the arrsy 
}