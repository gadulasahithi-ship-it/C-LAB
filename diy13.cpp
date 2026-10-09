#include <iostream>
using namespace std;
class Counter {
private:
int count;
static int totalCreated;
static int currentlyAlive;
public:
Counter() {
count = 0;
totalCreated++;
currentlyAlive++;
}
~Counter() {
currentlyAlive--;
}
void increment() {
count++;
}
void reset() {
count = 0;
}
int getCount() {
return count;
}
static void displayObjects() {
cout << "Total objects created: " << totalCreated << endl;
cout << "Currently alive objects: " << currentlyAlive << endl;
}
};
int Counter::totalCreated = 0;
int Counter::currentlyAlive = 0;
int main() {
Counter::displayObjects();
Counter c1, c2;
cout << "\nAfter creating two objects:" << endl;
Counter::displayObjects();
{
Counter c3;
cout << "\nAfter creating a third object:" << endl;
Counter::displayObjects();
}
cout << "\nAfter destroying the third object:" << endl;
Counter::displayObjects();
return 0;
}
