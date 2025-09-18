#include<iostream>
using namespace std;

int main(){
    int STACK[10];
    int top = -1;

    for (int i = 0; i < 10; i++) { 
        if (top < 9) {
            top++;                                      //push operation 
            STACK[top] = i;         
        } else {    
            cout << "Stack overflow" << endl;           //overflow
        }
    }

    while (top != -1) {
        cout << "Popped: " << STACK[top] << endl;               //pop operation
        top--;
    }

}