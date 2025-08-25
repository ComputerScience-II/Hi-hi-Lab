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

    int diff = 0;
    
    numVals1 = 0;
    numVals2 = 0;

    for(char &x: a) numVals1 += int(x);
    for(char &y: b) numVals2 += int(y);

    if(a.size() == b.size()) {
        
        for (int i = 0; i < a.size() && i < b.size(); i++) {
            if (a[i] != b[i]) {
                
                diff += int(a[i]) - int(b[i]);
            }
        }
        return diff;
    }
    else {
        return a.size() - b.size();
    }

    return 0;
}

void runEdgeCases() {

    assert(strcmp_case_insensitive("APple", "apple") == 0);
    assert(strcmp_case_insensitive("banana", "banana") == 0);
    assert(strcmp_case_insensitive("grape", "apple") > 0);
    assert(strcmp_case_insensitive("apple", "grape") < 0);
    assert(strcmp_case_insensitive("cat", "cater") < 0);
    assert(strcmp_case_insensitive("cater", "cat") > 0);

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

