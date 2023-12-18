template <typename T>
class Stack {
public:
    Stack();
    ~Stack();

    void push(const T& value);
    void pop();
    T top() const;
    bool isEmpty() const;
    int size() const;

private:
    static const int MAX_SIZE = 100;
    T elements[MAX_SIZE];
    int topIndex;

};