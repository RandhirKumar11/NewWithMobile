#include <iostream>
using namespace std;

void printValue(void *ptr, int type) {
    if (type == 1) 
    {
        // Cast to int pointer and print
        cout << "Integer value: " << (int)ptr << endl;
    }
    else if (type == 2) {
        // Cast to float pointer and print
        cout << "Float value: " << (float)ptr << endl;
    }
    else if (type == 3) {
        // Cast to char pointer and print
        cout << "Character value: " << (char)ptr << endl;
    }
    else {
        cout << "Invalid type!" << endl;
    }
}

int main() {
    int a = 42;
    float b = 3.14f;
    char c = 'Z';

    printValue(&a, 1); // Integer
    printValue(&b, 2); // Float
    printValue(&c, 3); // Char
    return 0 ;
}