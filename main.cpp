#include <iostream>
#include "Stack.cpp" 

int main() {
    using std::cout, std::endl;
    Stack<int> s;

    cout << "Is empty: " << (s.isEmpty() ? "true" : "false") << endl;
    
    s.push(2);
    cout << "Top: " << s.top() << endl;

    s.push(1);
    cout << "Top: " << s.top() << endl;

    cout << "Is empty: " << (s.isEmpty() ? "true" : "false") << endl;

    s.pop();
    cout << "Top after pop: " << s.top() << endl;

    cout << "Size: " << s.size() << endl;

    return 0;
}
