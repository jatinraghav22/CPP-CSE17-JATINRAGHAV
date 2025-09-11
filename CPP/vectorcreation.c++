#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int> num= {1,2,3,4,5};
    for (int i=0 ; i<num.size(); i++){
        cout<< num[i] <<"\n";
    }
    cout<<endl<<num.front();
    cout<<endl<<num.back()<<endl;
    num.push_back(6);
    for (int i=0 ; i<num.size(); i++){
        cout<< num.at(i) <<"\n";
    }
    num.pop_back();
    for (int i=0 ; i<num.size(); i++){
        cout<< num.at(i) <<"\n";
    }
    cout<< endl<< num.empty()<<"\n";
    
    for(int var : num){
        cout<< var <<"\n";
    }
    vector<int> num1;
    num1.assign(num.begin(),num.end());
    for(int var : num1){
        cout<< var <<"\n";
    }
    num1.assign(3,7);
    cout<< endl;
    for(int var: num1){
        cout<<var<<"\n";
    }
    num1.insert(num1.begin()+1,7);
    cout<<"\n new vector num1 after insertion is :";
    for (int var : num1){
        cout<<var <<"\n";
    }
    num1.insert(num1.begin()+2,3,8);
    cout<<"\n new vector num1 after insertion is :";
    for (int var : num1){
        cout<<var <<"\n";
    }
    
    
}