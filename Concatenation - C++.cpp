#include<bits/stdc++.h>
using namespace std;

int main(){
    // we can concatenate two strings with add (+) sign

    string s1 = "Hello";
    string s2 ="World";
    string s3 = s1 + " " + s2;
    cout<<s3<<"\n";

    // we can add char as well

    char exclaim = '!';
    string s4 = s3 + exclaim;
    cout<<s4<<"\n";

    // we can also add char literal with a string

    cout<<"Adding char literal with a string: "<<s3+'!'<<"\n";


    // we can not add a number with a string

    //cout<<s3+1<<"\n";//this will show error

    return 0;
}
