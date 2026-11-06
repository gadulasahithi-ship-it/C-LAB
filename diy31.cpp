#include <iostream>
using namespace std;
template <class T>
T findMax(T arr[], int n)
{
T max = arr[0];
for (int i = 1; i < n; i++)
{
if (arr[i] > max)
{
max = arr[i];
}
}
return max;
}
int main(){
int a[] = {10, 25, 15, 40, 30};
double b[] = {10.5, 25.7, 15.2, 40.8, 30.6};
int n1 = 5;
int n2 = 5;
cout << "Maximum integer: " << findMax(a, n1) << endl;
cout << "Maximum double: " << findMax(b, n2) << endl;
return 0;
}
