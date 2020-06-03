struct Node {
    int value;
    Node * next; 
    Node(){
        next = nullptr;
    }
};

class LinkedList {
    private:
        Node * head;

    public:
        LinkedList(){
            head = nullptr;
        }

        void push(int value) {
            Node * newNode = new Node();
            newNode->value = value;
            newNode->next = head;
            head = newNode;
        }

        void pop() {
            if (head != nullptr) {
                Node * temp = head;
                head = head->next;
                delete temp;
            }
        }

        bool empty(){
            if (head == nullptr) {
                return true;
            } else {
                return false;
            }
        }

        int getTop() {
            if (head != nullptr) {
                return head->value;
            }
        }

        void print() {
            Node * iter = head;

            while (iter->next != nullptr) {
                std::cout << iter->value << " ";
                iter = iter->next;
            }
            std::cout << std::endl;
        }
};