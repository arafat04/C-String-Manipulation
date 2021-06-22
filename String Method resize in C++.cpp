#include<bits/stdc++.h>
using namespace std;
int main(){
    // we wil use built in string class method resize()
    //some text
    //012345678
    //[s][0][m][e][ ][t][e][x][t]
    // 0  1  2  3  4  5  6  7  8

    string s = "some text";
    s.resize(4);
    cout<<s<<"\n";//some
    cout<<s.length();//4
    s.resize(9);
    cout<<s<<"\n";//some



    string text = "some text";
    //what if we increase the text and see what happens
    text.resize(20);
    cout<<text<<"\n";//some text


    //what is we want to print a index of text
    cout<<text[12]<<"\n";//it will show blank

    // text[12] and text.at(12) are same


    cout<<text.at(12)<<"\n";// it will also show blank

    cout<<(int)text[12]<<"\n";// it will show 0
    cout<<(int)text.at(12)<<"\n";//it will show 0
    //ASCII value of null(ch) is 0 in cpp,
    text.resize(25,'!');//second parameter needs to be a char

    cout<<text<<"\n";

    string str;
    cout<<"Enter text: ";
    getline(cin,str);
    str.resize(str.length()+3,'!');
    cout<<str;

    return 0;
}

