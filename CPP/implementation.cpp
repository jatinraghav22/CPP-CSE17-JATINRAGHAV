#include<iostream>
using namespace std;

int main(){
    int STACK[10];
    int top = -1;

    for (int i = 0; i < 10; i++) { 
        if (top < 9) {
            top++;
            STACK[top] = i;  
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    while (top != -1) {
        cout << "Popped: " << STACK[top] << endl;
        top--;
    }

}