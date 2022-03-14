class MyHashSet {
public:
    int data[1000001]; //0 to 1000000

    MyHashSet() {
        fill(data, data + 1000000, -1);
    }
    
    void add(int key) {
        data[key] = key;
    }
    
    void remove(int key) {
        data[key] = -1;
    }
    
    bool contains(int key) {
        return data[key] == key;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */