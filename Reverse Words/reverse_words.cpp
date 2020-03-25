#include <iostream>
#include <string>

using namespace std;

void reverseChars(string &str, int l, int r) {
    while(l < r) {
        swap(str[l++], str[r--]);
    }
}

void reverseWords(string& message) {
    if(message.length() == 0) return;
    reverseChars(message, 0, message.length()-1);
    
    int currIdx = 0;
    for(int i=0; i<=message.length(); i++) {
        // end of the current word
        if(i == message.length() || message[i] == ' ') {
            reverseChars(message, currIdx, i-1);
            currIdx = i+1;
        }
    }
}

int main() {
    string message = "cake pound steal";
    reverseWords(message);  // steal pound cake
    cout << message << endl;
}