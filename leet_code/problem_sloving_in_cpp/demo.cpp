#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    string firstName = "John";
    string lastName = "Doe";
    string fulln = firstName.append(" ").append(lastName);
    cout << "Full Name: " << fulln << endl;
    cout << "Length: "<< fulln.length() << endl;
    cout << "First element of the string: "<< fulln[0] << endl;
    cout << "last element of the string: " << fulln[fulln.length()-1];
    cout << "\nUsing .at() funtion to access the value: "<< fulln.at(1);
    cout << "\nThe name of the man is \"Ayman\"";
    cout << "\nfile directory is D:\\learning\\problem_solving\\demo.cpp"<< endl;
    cout <<"The substring is : "<< fulln.substr(0,4)<< endl;
    cout <<"The max value :" << max(10,20) <<endl;
    cout << "The min value :" << min(10,20) << endl;

    cout << "Using for each loop to iterate through the string: ";
    for(char c : fulln){
        cout << c << " ";
    }
    int arr[5] = {1,2,3,4,5};
    cout << "\nUsing for each loop to iterate through the array: ";
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}