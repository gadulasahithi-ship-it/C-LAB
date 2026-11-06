#include <iostream>
#include <string>
using namespace std;
template <class T>
class Queue
{
T arr[100];
int frontIndex, rear, size;
public:
Queue()
{
frontIndex = 0;
rear = -1;
size = 0;
}
void enqueue(T value)
{
if (size == 100)
{
cout << "Queue is full!" << endl;
return;
}
rear = (rear + 1) % 100;
arr[rear] = value;
size++;
cout << value << " inserted into queue." << endl;
}
void dequeue()
{
if (size == 0)
{
cout << "Queue is empty!" << endl;
return;
}
cout << arr[frontIndex] << " removed from queue." << endl;
frontIndex = (frontIndex + 1) % 100;
size--;
}
void front()
{
if (size == 0)
{
cout << "Queue is empty!" << endl;
return;
}
cout << "Front element: " << arr[frontIndex] << endl;
}
};
int main()
{
Queue<string> q;
q.enqueue("Apple");
q.enqueue("Banana");
q.enqueue("Mango");
q.front();
q.dequeue();
q.front();
return 0;
}
