// Queue Operation Using CPP

// Create a Class

#include <iostream>
#include <queue>

using namespace std;
class Queue
{
public:
    int *array;
    int size;
    int rear;
    int front;

    // Constrctor Used
    Queue(int size)
    {
        this->size = size;
        array = new int[size];
        rear = 0;
        front = 0;
    }

    // Operation Using Queue

    // Push Operation
    void enqueue(int data)
    {
        if (data == size)
        {
            cout << "Queue is Underflow";
        }

        else
        {
            array[rear] = data;
            rear++;
        }
    }

    // POP Operation
    int dequeue()
    {
        if (front == rear)
        {
            return -1;
        }

        else
        {
            // Return front
            int ans = array[front];

            array[front] = -1;
            front++;

            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    int front()
    {
        if (front == rear)
        {
            return -1;
        }

        else
        {
            return array[front];
        }
    }

    bool empty()
    {
        if (front == rear)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

int main()
{

    return 0;
}
