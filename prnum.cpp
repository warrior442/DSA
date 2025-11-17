#include <iostream>
using namespace std;



bool prnum(int num){
    
    for(int i = 2 ; i * i < num ; i++ ){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    cout << "Enter the number"<<endl;
    cin >> n ;
    
    if(prnum(n)){
     cout<< "number is prime";
    } else{
        cout << "number is not prime";
    }

    return 0;
}