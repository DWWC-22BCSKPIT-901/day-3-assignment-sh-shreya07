#include <iostream>
#include <string>
using namespace std;

void print_full_name(string first, string last) {
    cout << "Hello " << first << " " << last << "! You just delved into function." << endl;
}

int main() {
    string first, last;
    cout << "Enter first name: ";
    getline(cin, first);
    cout << "Enter last name: ";
    getline(cin, last);
    
    print_full_name(first, last);
    
    return 0;
}