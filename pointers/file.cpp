#include <iostream>
using namespace std;

void printNumber(int* numberPtr) {
cout<< *numberPtr <<endl;
};
void printletter(char* charPtr) {
cout<< *charPtr <<endl;
};
int main()
{
    // int n = 7;
    // cout << n << endl;
    // cout << &n << endl;
    // int *ptr = &n;
    // cout << ptr << endl;
    // cout << ptr << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    ////////////////////////////////////////
    // void pointers
    int number = 5;
    char letter = 'a';
    printNumber(&number);
    printletter(&letter);

    return 0;
}