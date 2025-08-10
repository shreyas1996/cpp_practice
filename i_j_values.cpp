#include <iostream>

using namespace std;

int i;
auto k = 5;

int main() {
    int j;
    k = 10.5;

    cout<< "i is: " << i << endl;
    cout<< "j is: " << j << endl;
    cout<< "k is: " << k << endl;

    // Display type of i, j, k
    cout<< "type of i is: " << typeid(i).name() << endl;
    cout<< "type of j is: " << typeid(j).name() << endl;
    cout<< "type of k is: " << typeid(k).name() << endl;

    cout<< "sizeof(i): " << sizeof(i) << endl;
    cout<< "sizeof(j): " << sizeof(j) << endl;
    cout<< "sizeof(k): " << sizeof(k) << endl;
    cout<< "sizeof(auto): " << sizeof(decltype(k)) << endl;
    cout<< "sizeof(int): " << sizeof(int) << endl;
    cout<< "sizeof(double): " << sizeof(double) << endl;
    cout<< "sizeof(float): " << sizeof(float) << endl;
    cout<< "sizeof(long): " << sizeof(long) << endl;
    cout<< "sizeof(long long): " << sizeof(long long) << endl;
    cout<< "sizeof(short): " << sizeof(short) << endl;
    cout<< "sizeof(char): " << sizeof(char) << endl;
    cout<< "sizeof(bool): " << sizeof(bool) << endl;
    cout<< "sizeof(void): " << sizeof(void) << endl;
    cout<< "sizeof(void*): " << sizeof(void*) << endl;
    cout<< "sizeof(nullptr): " << sizeof(nullptr) << endl;
    cout<< "sizeof(string): " << sizeof(string) << endl;
    
    return 0;
}