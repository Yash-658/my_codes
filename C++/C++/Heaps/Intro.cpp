#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void heapifyDown(int[], int, int);
// Heap is a CBT(Complete Binary Tree) that comes with a heap order property~
// CBT- -> every node is completely filled but not always the last level~
//      -> nodes always lean towards the left

// MAXHEAP- every node has children that have values smaller or equal to than their parents
// MINHEAP- every node has children that have values greater or equal to than their parents

// if an element has index 'i'-
// it's left child pos = 2*i
// it's right child pos = (2*i) + 1

// parent position of 'i' = i/2 

// insertion and deletion takes TC- O(logn)
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

// buildHeapFromArray() is O(n) because:

// Deeper nodes (more in number) require less work
// Shallower nodes (fewer) require more work
// The total work balances out to linear time

    void heapFromArray(int a[], int n) {     // O(n) mai ye array se heap bna deta hai~  (how? heapify down agr logn time leta hai and ye approx n elements ke liye chlega toh O(nlogn) hona tha na?)
        size = n;
        for (int i = 1; i <= size; i++)
        {
            arr[i] = a[i];
        }

        for(int i = n/2; i >= 1; i--) 
        {
            heapifyDown(arr, size, i);
        }
    }

    void heapSort() {               // O(nlogn)
        int n = size;
        while(n > 1) {
            // step: 1, swap top element with the last element~
            swap(arr[1], arr[n]);
            n--;

            // step: 2, put root element at its right place~
            heapifyDown(arr, n, 1);
        }
    }
};


void heapifyDown(int arr[], int size, int i) {             // o(logn) mai sahi jgah pe phocha deti hai~
    int left = 2 * i;
    int right = 2 * i + 1;
    int largest = i;

    if (left <= size && arr[left] > arr[largest])
        largest = left;

    if (right <= size && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapifyDown(arr, size, largest);
    }
}

int main(){
    // maxHeap heap;
    // heap.insert(10);
    // heap.insert(60);
    // heap.insert(50);
    // heap.insert(40);
    // heap.insert(30);

    // heap.print();
    // heap.deleteMax();
    // heap.print();

    // BUILDING HEAP FROM ARRAY~
    int arr[7] = {-1, 55, 85, 40, 60, 30, 50};
    int n = 6;

    // cout<<"Normal array: ";
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    
    maxHeap h;
    h.heapFromArray(arr, n);
    cout<<"After converting into maxHeap: ";
    h.print();
    cout<<endl;

    cout<<"After sorting: ";
    h.heapSort();
    h.print();
    return 0;
}