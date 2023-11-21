#include<iostream>
#include "Queue.h"
using namespace std;

int main()
{
    // Constant for the number of items
    const int NUM_ITEMS = 5;

    // Create a dynamic queue object.
    Queue<double> queue;

    cout << "Enqueuing " << NUM_ITEMS
         << " items...\n";

    // enqueue some items.
    for (int x = 0; x < NUM_ITEMS; x++)
        queue.enqueue(x * 1.1);

    // Dequeue and retrieve all items in the queue
    cout << "The values in the queue were:\n";
    while (!queue.isEmpty())
    {
        double value;
        queue.dequeue(value);
        cout << value << endl;
    }

    return 0;
}
