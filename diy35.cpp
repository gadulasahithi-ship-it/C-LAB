#include <iostream>
#include <queue>
using namespace std;
int main()
{
int N, num;
priority_queue<int> pq;
cout << "Enter the number of elements: ";
cin >> N;
if (N < 3)
{
cout << "Please enter at least 3 numbers.";
return 0;
}
cout << "Enter " << N << " numbers:\n";
for (int i = 0; i < N; i++)
{
cin >> num;
pq.push(num);
}
cout << "Three largest numbers are:\n";
for (int i = 0; i < 3; i++)
{
cout << pq.top() << endl;
pq.pop();
}
return 0;
}
