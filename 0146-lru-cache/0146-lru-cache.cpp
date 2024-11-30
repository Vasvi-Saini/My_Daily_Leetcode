// struct Node {
//   int key;
//   int value;
//   Node* prev;
//   Node* next;
  
//   Node(int k, int v){
//     key = k;
//     value = v;
//     next = prev = NULL;
//   }
// };

// class LRUCache {
// public:
//     map<int, Node*> mp;
//     Node *head = new Node(-1, -1);
//     Node *tail = new Node(-1, -1);
//     int mycapacity;

//     // void add(Node* vonode){    // addition at tail
//     // Node* temp = tail->prev;
//     // temp->next = vonode;
//     // vonode->prev = temp;
//     // vonode->next = tail;
//     // tail->prev = vonode;
//     // }
//      LRUCache(int capacity) {
//         this->mycapacity = capacity;
//         head->next = tail;
//         tail->prev = head;
//         head->prev = nullptr;
//         tail->next = nullptr;
//     }

//     // Addion of new node at head
//    void add(Node* vonode) {    
//     Node* temp = head->next;   // current first node after the head
//     head->next = vonode;       // Link the head to the new node
//     vonode->prev = head;       
//     vonode->next = temp;       
//     temp->prev = vonode;     
//    }
   
//     void remove(Node* vonode){
//        vonode->prev->next = vonode->next;
//        vonode->next->prev = vonode->prev;

//        delete vonode;  // free up memory is important
//     }
    
//     int get(int key) {
//         // if(!mp[key]) return -1;  accessing mp[key] like this can create a new map entry with default value nullptr

//         Node *oldnode = mp[key];
//         remove(oldnode);      // remove old node from DLL        
//         add(oldnode);          // free memory

//         return oldnode->value;
//     }
    
//     void put(int key, int value) {

//         if (mycapacity == 0) return;  // edge case for empty cache

//         if(mp[key]) {           // key is already present
//             Node* old_node = mp[key];
           
//             remove(old_node);    // removed its old version from doubly linked list
//             delete old_node;    // free memory space for old_node bcz its work is done
//         }

        
//         Node* new_node = new Node(key, value); // create new node
       
//         add(new_node);                        // add in linked list
        
//         mp[key] = new_node;                  // add in map



//         if(mp.size() > mycapacity){
//             Node* tailPrev = tail->prev;   // nopde just before tail
//             mp.erase(tailPrev->key);      // remove node's key from map
//             remove(tailPrev);             // remove node from doubly linked list
//             delete tailPrev;              // free memory of tailPrev 
//         }

//     }
// };


class LRUCache {
public:
    class Node{
        public: 
            int key;
            int val;
            Node* prev;
            Node* next;

            Node(int key, int val){
                this->key = key;
                this->val = val;
            }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    int cap;
    unordered_map<int, Node*> m;

    LRUCache(int capacity) {
        cap = capacity;
        head -> next = tail;
        tail -> prev = head;
    }

    void addNode(Node* newnode){
        Node* temp = head -> next;

        newnode -> next = temp;
        newnode -> prev = head;

        head -> next = newnode;
        temp -> prev = newnode;
    }

    void deleteNode(Node* delnode){
        Node* prevv = delnode -> prev;
        Node* nextt = delnode -> next;

        prevv -> next = nextt;
        nextt -> prev = prevv;
    }
    
    int get(int key) {
        if(m.find(key) != m.end()){
            Node* resNode = m[key];
            int ans = resNode -> val;

            m.erase(key);
            deleteNode(resNode);
            addNode(resNode);

            m[key] = head -> next;
            return ans;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            Node* curr = m[key];
            m.erase(key);
            deleteNode(curr);
        }

        if(m.size() == cap){
            m.erase(tail -> prev -> key);
            deleteNode(tail -> prev);
        }

        addNode(new Node(key, value));
        m[key] = head -> next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */