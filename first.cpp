#include <iostream>
using namespace std;

void sum(int a, int b){
    cout<<"The sum is: "<<a+b<<endl;
}

void subtract(int a, int b){
    cout<<"The difference is: "<<a-b<<endl;
}

int main(){
    cout<<"Hello World"<<endl;
    sum(5, 10);
    subtract(10, 5);
    return 0;
}