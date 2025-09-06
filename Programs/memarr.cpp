#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int *arr = new int[n]; // dynamically allocating the memeory size of an int * n
    for (auto i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " Number : ";
        cin >> arr[i]; // dereference operator
    }

    for (auto i = 0; i < n; i++)
    {
        cout << "The value is : " << arr[i] << endl;
        cout << "The address is : " << &arr[i] << endl;
    }

    delete[] arr; // freeing the allocated space
    arr = nullptr;
    return 0;
}