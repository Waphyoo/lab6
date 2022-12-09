#include<iostream>
using namespace std;

int main(){
    int num=1;
    int counteven=0;
    int countodd=0;
    while(num!=0){
    cout << "Enter an integer: ";
    cin>>num;
    if(num%2==0&&num!=0){
        counteven++;
    }
    if(num%2==1){
        countodd++;
    }
    }
 
    cout << "#Even numbers = "<<counteven;
    cout << "\n#Odd numbers = "<<countodd;
    return 0;
}
