#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() 
{
    int n;
    string name;
    long num;
    cin>>n;
    map<string,long>phonebook;
    for(int i=0;i<n;i++)
    {
        cin>>name>>num;
        phonebook[name] = num;
    }
    while(cin>>name)
    {
        if(phonebook.find(name) != phonebook.end())
        {
            cout<<name<<"="<<phonebook.find(name)->second<<endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }
    }
}
