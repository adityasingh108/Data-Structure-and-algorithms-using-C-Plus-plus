#include<bits/stdc++.h>
using namespace std; 

class heap
{
private:
    int array[1000];
    int size;
public:
    heap(){
        array[0] = -1;
        size = 0;
    }

    // insertion of elements in max heap 
    void insert(int val){
        size++;
        int index = size;
        array[index] = val;
        
        while (index > 1)
        {
            int parent = index/2;

            // for max heap 
            if(array[parent] < array[index]){
                swap(array[parent] , array[index]);
                index = parent;
            }
            /* 
             // for min heap 
            if(array[parent] < array[index]){
                swap(array[parent] , array[index]);
                index = parent;
            }
            */ 
            else return;
        }
        
    }

    void delete_from_heap(){
        if(size  <= 0){
            cout<<"Nothing to be deleted "<<endl;
            return;
        }
        // step 1 put last element in root 
        array[1] = array[size];


        // step 2 remove the last element 
        size--;

        //step 3 heapify the heap
        int i = 1;
        while (i < size)
        {
            int leftChild = i*2;
            int rightChild = i*2+1;

            if(leftChild < size && array[i] < array[leftChild]){
                swap(array[i] ,array[leftChild]);
                i = leftChild;
            }
            else if(rightChild < size && array[i] < array[rightChild]){
                swap(array[i] ,array[rightChild]);
                i = rightChild;
            }
            else return;
        }

    }

    void print(){
        for(int i = 1; i<=size;i++ ){
            cout<< array[i] <<" ";
        }cout <<endl;
    }

    // ~heap(){
    //     array
    // }


};

void heapify(int array[] , int n , int i){
    int largest = i;
    int leftChild = i*2;
    int rightChild = i*2+1;

    if(leftChild < n && array[largest] < array[leftChild]){
                largest = leftChild;
    }
    else if(rightChild < n  && array[largest] < array[rightChild]){
                
                largest = rightChild;
    }         
    if(largest != i){
        swap( array[largest] , array[i]);
        heapify(array, n , largest); 
    }
            

}


int main()
{
    // create a heap;
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();
    h.delete_from_heap();
    h.print();
    return 0;
}