#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class maxHeap {
    public:
    int arr[100];
    int size;

    maxHeap() {
        size = 0;
    }

    void insert(int a) {
        if (size >= 100) {
            cout << "Heap overflow!\n";
            return;
        }

        size = size+1;
        int index = size;
        arr[index] = a;

        while(index > 1) {
            int parent = index/2;

            if(arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            }

            else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
        
    }

    void deleteMax() {
        if (size == 0) {
            cout << "Heap is empty!\n";
            return;
        }

        cout << "Deleting: " << arr[1] << endl;

        // Replace root with last element
        arr[1] = arr[size];
        size--;

        // Heapify down
        int i = 1;
        while (true) {
            int left = 2 * i;
            int right = 2 * i + 1;
            int largest = i;

            if (left <= size && arr[left] > arr[largest])
                largest = left;

            if (right <= size && arr[right] > arr[largest])
                largest = right;

            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                break;
            }
        }
    }
};

int main(){
    maxHeap heap;
    heap.insert(10);
    heap.insert(60);
    heap.insert(50);
    heap.insert(40);
    heap.insert(30);

    heap.print();
    heap.deleteMax();
    heap.print();
    return 0;
}