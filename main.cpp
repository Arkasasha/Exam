#include <iostream>

using namespace std;

void passByValue(int num) {
    num++;
    cout << "Value inside the \"passByValue\" function: " << num << endl;
}

void passByReference(int& num) {
    num++;
    cout << "Value inside the \"passByReference\" function: " << num << endl;
}

int main() {
    int num = 10;

    cout << "Value before the \"passByValue\" function: " << num << endl;
    passByValue(num);
    cout << "Value after the \"passByValue\" function: " << num << endl << endl;

    cout << "Value before the \"passByReference\" function: " << num << endl;
    passByReference(num);
    cout << "Value after the \"passByReference\" function: " << num;

    return 0;
}
