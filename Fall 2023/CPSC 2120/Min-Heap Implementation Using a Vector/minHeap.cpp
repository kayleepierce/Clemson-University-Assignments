#include "minHeap.h"

//Function to maintain heap property when moving element up
void minHeap::siftUp(int pos) {
    while(pos > 0) { //Continue until at root
        int parent = (pos-1)/2;
        if(heap[pos] < heap[parent]) {
            swap(heap[pos], heap[parent]);
            pos = parent;
        }
        else {
            break;
        }
    }
}

//Function to maintain heap property when moving element down
void minHeap::siftDown(int pos) {
    while(pos < heap.size()) { //Continue until leaf node
        int left = 2*pos + 1;
        int right = 2*pos + 2;
        int min = pos;
        if(left < heap.size() && heap[left] < heap[min]) {
            min = left;
        }
        if(right < heap.size() && heap[right] < heap[min]) {
            min = right;
        }
        if(min!= pos) {
            swap(heap[pos], heap[min]);
            pos = min;
        }
        else {
            break;
        }
    }
}

//Constructor to build a heap 
minHeap::minHeap(vector<int> data) {
    heap = data;
    int n = heap.size();
    for(int i = (n-1)/2; i >= 0; i--) {
        siftDown(i);
    }
}

//Function to insert into the heap
void minHeap::insert(int value) {
    heap.push_back(value);
    siftUp(heap.size()-1);
}

//Function to remove minimum from heap
int minHeap::removeMin() {
    if(heap.empty()) {
        return -1;
    }

    int minValue = heap[0];
    int lastIndex = heap.size()-1;
    swap(heap[0], heap[lastIndex]);

    heap.pop_back();

    siftDown(0);

    return minValue;
}
