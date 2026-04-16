class DynamicArray {
    int length = 0;
    int capacity;
    int* arr = NULL;
public:

    DynamicArray(int capacity) : length(0), capacity(capacity) {
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(length == capacity) {
            resize();
        }
        arr[length] = n;
        length++;
    }

    int popback() {
        int value = arr[length - 1];
        arr[length] = 0;
        length--;
        return value;
    }

    void resize() {
        capacity *= 2;
        int* new_arr = new int[capacity];
        for(int i = 0; i < length; i++) {
            new_arr[i] = arr[i];
        }
        delete arr;
        arr = new_arr;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }
};
