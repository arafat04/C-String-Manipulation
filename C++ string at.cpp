#include<bits/stdc++.h>
using namespace std;

int main(){
    //string method at() help to get access individual characters of a particular string

    //some text
    //012345678

    string s = "some text";
    cout<<s.at(2)<<"\n";//prints 'm'

    // at() can help to change a particular character of an index

    s.at(1) = 'a';
    cout<<s<<"\n";// will print same text - 'a' sits on the index 1

    return 0;
}
