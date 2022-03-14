class MyHashMap {
    
    map<int, int> data[100000];
public:  
    MyHashMap(){ //initializing vector. we are making 10^6+1 keys and storing -1 in each.
    }
    
    void put(int key, int value) {
        data[key % 100000][key] = value;
    }
    
    int get(int key) {
        map<int, int>::iterator iter = data[key % 100000].find(key);
        if(iter == data[key % 100000].end())
            return -1;
        return data[key % 100000][key];
    }
    
    void remove(int key) {
       data[key % 100000].erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */