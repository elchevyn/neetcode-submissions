class DynamicArray {
private:
    int* arr;
    int size;
    int capacity;

public:

    DynamicArray(int capacity);

    int get(int i);

    void set(int i, int n);

    void pushback(int n);

    int popback();

    void resize();

    int getSize();

    int getCapacity();
};

DynamicArray::DynamicArray(int capacity_){
    arr = new int[capacity_];
    size = 0;
    capacity = capacity_;
}
int DynamicArray::get(int i){
    return arr[i];
}
void DynamicArray::set(int i, int n){
    arr[i] = n;
}
void DynamicArray::pushback(int n){
    
    if (size == capacity){
        resize();
    }
    arr[size] = n;
    size++;

}
void DynamicArray::resize(){
    int newCapacity = capacity * 2;
    int* newArr = new int[newCapacity];

    for (int i = 0; i < size; i++){
        newArr[i] = arr [i];
    }
    delete[] arr;

    arr = newArr;
    capacity = newCapacity;
}
int DynamicArray::popback(){
    int val = arr[size - 1];
    size--;
    return val;
}
int DynamicArray::getSize(){
    return size;
}
int DynamicArray::getCapacity(){
    return capacity;
}