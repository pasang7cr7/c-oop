#include<iostream>
using namespace std;

class A {
    int *a;
    int total;

public:
    A() {
        a = new int[5]{1, 2, 3, 4, 5};
        total = 0;
    }

    void calculateSum() {
        for (int i = 0; i < 5; i++) {
            total += a[i];
        }
    }

    void show() {
        cout << "Sum: " << total << endl;
    }

    ~A() {
        delete[] a; // Correct deallocation
    }
};

int main() {
    A obj;
    obj.calculateSum();
    obj.show();

    return 0;
}

