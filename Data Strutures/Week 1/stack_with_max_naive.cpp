#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

using std::cin;
using std::string;
using std::vector;
using std::cout;
using std::max_element;

class StackWithMax {
    vector<int> stack;
    vector<int> max;

  public:

    void Push(int value) {
        stack.push_back(value);

        if (stack.size() == 1) {
            max.push_back(value);
            return;
        }

        if (value > max.back())
            max.push_back(value);
        else
            max.push_back(max.back());
    }

    void Pop() {
        assert(stack.size());
        assert(max.size());
        stack.pop_back();
        max.pop_back();
    }

    int Max() const {
        assert(max.size());
        return max.back();
        // assert(stack.size());
        // return *max_element(stack.begin(), stack.end());
    }
};

int main() {
    int num_queries = 0;
    cin >> num_queries;

    string query;
    string value;

    StackWithMax stack;

    for (int i = 0; i < num_queries; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
            stack.Push(std::stoi(value));
        }
        else if (query == "pop") {
            stack.Pop();
        }
        else if (query == "max") {
            cout << stack.Max() << "\n";
        }
        else {
            assert(0);
        }
    }
    return 0;
}
