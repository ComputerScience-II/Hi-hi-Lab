#include <iostream>
#include <cassert>
#include <string>
using namespace std;

string str1, str2;

string toLower(string str) {

    for(char &a: str) {

        a = tolower(a);
    }

    return str;
}

bool strcmp_case_insensitive(string a, string b) {

    if(toLower(a) == toLower(b)) {

        return true;
    }

    return false;
}



int main() {

    cout << "Enter first string: " << endl;
    cin >> str1;
    cout << "Enter second string: " << endl;
    cin >> str2;

    if(str1.empty() || str2.empty()) {

        cout << " One or both strings are empty" << endl;
    
        return 1;
    }

    
    
    if(strcmp_case_insensitive(str1, str2)) {

        cout << "The strings are equal (case insensitive)." << endl;
    }
    else {

        cout << "The strings are not equal." << endl;
    }

    return 0;
}