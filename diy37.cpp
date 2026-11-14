#include <iostream>
#include <memory>
using namespace std;
int main()
{
unique_ptr<int[]> arr = make_unique<int[]>(5);
cout << "Enter 5 numbers:\n";
for (int i = 0; i < 5; i++)
{
cin >> arr[i];
}
cout << "\nArray elements are:\n";
for (int i = 0; i < 5; i++)
{
cout << arr[i] << " ";
}
cout << endl;
cout << "Memory is managed automatically using unique_ptr.\n";
return 0;
}
