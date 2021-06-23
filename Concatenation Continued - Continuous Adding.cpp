#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    string overallInput;
    do{

        cout<<"Enter some text: ";
        getline(cin,input);
        overallInput+=input;
    }while(input!="!");
    cout<<overallInput;
    return 0;
}
