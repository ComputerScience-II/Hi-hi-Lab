#include <iostream>
#include <cassert>
#include <string>
using namespace std;

string str1, str2;
int numVals1 = 0;
int numVals2 = 0;

string toLower(string str) {

    for(char &a: str) {

        a = tolower(a);
    }

    return str;
}

int strcmp_case_insensitive(string a, string b) {

    a = toLower(a);
    b = toLower(b);

    if(a == b) {
        return 0;
    } 

    else if(a < b) {
        return -1;
    }
    
    else {

        return 1;
    }
    
}
int main() {
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    int result = strcmp_case_insensitive(str1, str2);
    

    return 0;
}