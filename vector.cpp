#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout <<"The size of the vector is: ";
    cin >> size;

    vector<int> v(size ,0);
    // input section
    for(int i=0; i<size; i++){
        cin >> v[i];
    }
    // v.push_back(6);
    // v.push_back(7);
    // v.push_back(8);
    // v.push_back(9);
    // v.push_back(10);

    // push_back ==  emplace_back

    v.emplace_back(6);
    v.emplace_back(7);
    v.emplace_back(8);
    v.emplace_back(9);
    v.emplace_back(10);

    // printing section
    cout << "Printing the values of the vector: " << endl;

    // pop_back or delete element from the last

    v.pop_back();


    // size of the vector
    cout << "The size of the vector is " << v.size() << endl;


    for(auto elem:v){
        cout << elem << " ";    
    }cout << endl;

    

    // clear all the element from the vector

    v.clear();

    cout << "The size of the vector is " << v.size() << endl;




}