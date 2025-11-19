#include <iostream>
using namespace std;

string s = "18+5-2";
int i = 0;   


void printINT() {
    int num = 0;
    while (i < s.size() && isdigit(s[i])) {
        num = num * 10 + (s[i] - '0');
        i++;
    }
    cout << "INT(" << num << ") ";
}




void print() {
    while (i < s.size()) {
        char ch = s[i];

        if (isdigit(ch)) {
            printINT();
        }
        
        else {
          switch (ch) {
        case '+': cout << "PLUS "; break;
        case '-': cout << "MINUS "; break;
        case '*': cout << "MULT "; break;
        case '/': cout << "DIV "; break;
        default:  cout << "UNKN(" << ch << ") ";
    }
            i++;
        }
    }
}

int main() {
    print();
    return 0;
}
