#include "IntegerArrayQueue.h"

bool IntegerArrayQueue::enqueue(int value)
{
    if((array[front] != 0) && (back + 2) % size == front) {
        return false; // Cannot enqueue
    } else if (array[front] == 0) {
        back = front;
        array[back] = value;
        return true;
    } else {
        back = back + 1;
        back = back % size;
        array[back] = value;
    }
    return true;
}

int IntegerArrayQueue::dequeue()
{
    int deqValue;
    if(front == back) {
        return 0; // Cannot dequeue
    } else {
        deqValue = array[front];
        array[front] = 0;
        front = front + 1;
        front = front % size;
        return deqValue;
    }
}
