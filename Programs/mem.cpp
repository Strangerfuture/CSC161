#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int; //dynamically allocating the memeory size of an int
    cout << "Enter the number :";
    cin >> *ptr; // dereference operator
    cout << "The value is : " << *ptr << endl;
    cout << "The address is : " << ptr << endl;

    delete ptr; // freeing the allocated space
    cout << "Garbage Value after deleting : " << *ptr << endl;
    ptr = nullptr;
    cout << "after assiging null pointer : " << *ptr << endl; // segmentation fault core dumped safe pactice 
    return 0;
}