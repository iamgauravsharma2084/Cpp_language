#include<iostream>
using namespace std;
int main()
{
    string s1,s2,s3;
    cout<<"Enter your first String:-";
    getline(cin,s1);
    cout<<"Enter your Secound string:-";
    getline(cin,s2);
    s3=s1+s2;
    cout<<"The concatenated string is:-"<<s3;
}