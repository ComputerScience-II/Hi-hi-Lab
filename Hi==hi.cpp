#include <iostream>
#include <string>
#include <cassert>
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
    
    for(char &x: a) {

        numVals1 += int(x);
    }

    for(char &y: b) {

        numVals2 += int(y);
    }

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

void runEdgeCases() {

    assert(strcmp_case_insensitive("String one", "string two") == -1);
    assert(strcmp_case_insensitive("String one", "string one") == 0);
    assert(strcmp_case_insensitive("String two", "string one") == 1);

}

int main() {

    runEdgeCases();

    cout << "Enter first string: " << endl;
    cin >> str1;
    cout << "Enter second string: " << endl;
    cin >> str2;

    int result = strcmp_case_insensitive(str1, str2);


    cout << "Comparison result: " << result << endl;

    return 0;
}

