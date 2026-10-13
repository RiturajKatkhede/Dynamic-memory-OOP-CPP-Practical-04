
#include <iostream>
using namespace std;

class Demo {
private:
    int num;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void referenceExample(int &ref) {
        ref = ref + 10;
        cout << "\nValue using reference: " << ref << endl;
    }

    void pointerExample(int *ptr) {
        *ptr = *ptr + 20;
        cout << "Value using pointer: " << *ptr << endl;
        cout << "Address using pointer: " << ptr << endl;
    }

    void display() {
        cout << "Final value: " << num << endl;
    }
};

int main() {
    Demo obj;
    int n;

    
    cout << "PART A: REFERENCES AND POINTERS" << endl;
    cout << "Enter an integer: ";
    cin >> n;

    obj.referenceExample(n);
    obj.pointerExample(&n);

    cout << "Final value of n: " << n << endl;

    cout << "\nPART B: DYNAMIC MEMORY ALLOCATION" << endl;

    Demo *ptr = new Demo;

    ptr->getData();
    ptr->display();

    delete ptr;
    ptr = nullptr;

    cout << "Dynamic memory released successfully." << endl;

    return 0;
}
