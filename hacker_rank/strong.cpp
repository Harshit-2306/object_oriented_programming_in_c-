#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int minimumNumber(int n, string password) {
    int missing = 0;
    bool hasDigit = false;
    bool hasLower = false;
    bool hasUpper = false;
    bool hasSpecial = false;
    
    string special_characters = "!@#$%^&*()-+";
    
    for (char c : password) {
        if (isdigit(c)) hasDigit = true;
        else if (islower(c)) hasLower = true;
        else if (isupper(c)) hasUpper = true;
        else if (special_characters.find(c) != string::npos) hasSpecial = true;
    }
    
    if (!hasDigit) missing++;
    if (!hasLower) missing++;
    if (!hasUpper) missing++;
    if (!hasSpecial) missing++;
    
    return max(missing, 6 - n);
}

int main() {
    int n;
    string password;
    
    cin >> n;
    cin >> password;
    
    cout << minimumNumber(n, password) << endl;
    
    return 0;
}
